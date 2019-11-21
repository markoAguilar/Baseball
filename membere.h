#ifndef MEMBERE_H
#define MEMBERE_H
#include <string>
#include <vector>
using namespace std;
struct user{
    string user_name;
    string password;
    user():user_name("admin"),password("admin"){}
};
class member{
private:
    vector<user> u;
public:
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

    void add(string a,string b){
        user ad;
        ad.user_name=a;
        ad.password=b;
        u.push_back(ad);
    }
};
#endif // MEMBERE_H
