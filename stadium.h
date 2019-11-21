#ifndef STADIUM_H
#define STADIUM_H

#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Stadium{
private:
    string stadium_type;
    string stadium_name;
    string team_name;
    string street_address;
    string city_state_zip;
    string box_office;
    string date_opened;
    string seating_capacity;
    string grass_type;
public:
    //DEFAULT CTOR
    Stadium();
    //FULL CTOR
    Stadium(string stadiumType,
            string stadiumName,
            string teamName,
            string streetAddress,
            string cityStateZip,
            string boxOffice,
            string dateOpened,
            string seatingCapacity,
            string grassType);

    void set_stadium_type(string a){stadium_type = a;}

    void set_stadium_name(string a){stadium_name=a;}

    void set_team_name(string a){team_name=a;}

    void set_street_address(string a){street_address=a;}

    void set_city_state_zip(string a){city_state_zip=a;}

    void set_box_office(string a){box_office=a;}

    void set_date_opened(string a){date_opened=a;}

    void set_seating_capacity(string a){seating_capacity=a;}

    void set_grass_type(string a){grass_type=a;}

    string get_stadium_type(){return stadium_type;}

    string get_stadium_name(){return stadium_name;}

    string get_team_name(){return team_name;}

    string get_street_address(){return street_address;}

    string get_city_state_zip(){return city_state_zip;}

    string get_box_office(){return box_office;}

    string get_date_opened(){return date_opened;}

    string get_seating_capacity(){return seating_capacity;}

    string get_grass_type(){return grass_type;}

//    //COUT OPERATOR
//    friend ostream& operator<<(ostream out, const Stadium& stadium);

//    //ASSIGNMENT OPERATOR
//    operator=();
};
#endif // STADIUM_H
