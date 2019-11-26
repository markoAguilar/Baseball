#ifndef MEMBERE_H
#define MEMBERE_H
#include <string>
#include <vector>
using namespace std;
//structur for user information
struct user{
    string user_name;
    string password;
    user():user_name("admin"),password("admin"){}
};
class member{
private:
    //vector to store all the member
    vector<user> u;
public:
    //check the input
    //a-user name; b-password
    bool check(string a,string b){
        for(int i=0;i<u.size();i++){
            if(a==u[i].user_name){
                if(b==u[i].password){
                    return true;
                }
                else
                    continue;
            }
        }
        return false;
    }

    //a-user name; b-password
    //add the mmember into vevtor
    void add(string a,string b){
        user ad;
        ad.user_name=a;
        ad.password=b;
        u.push_back(ad);
    }
};
#endif // MEMBERE_H
