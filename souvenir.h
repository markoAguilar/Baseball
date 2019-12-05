#ifndef SOUVENIR_H
#define SOUVENIR_H

#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Souvenir {
private:
    string souvenir_name;
    string souvenir_price;
public:
    Souvenir();
    Souvenir(string souvenirName, string souvenirPrice);
    void set_souvenir_name(string a){souvenir_name = a;}
    void set_souvenir_price(string a){souvenir_price = a;}
    string get_souvenir_name(){return souvenir_name;}
    string get_souvenir_price(){return souvenir_price;}
};

#endif // SOUVENIR_H
