#ifndef STADIUM_H
#define STADIUM_H
#include<string>
#include<stack>
#include<vector>
using namespace std;
class stadium{
private:
    string stadium_name;
    string team_teame;
    string street_address;
    string city_state_zip;
    string box_office;
    string date_opened;
    int seating_capacity;
public:
    void set_stadium_name(string a){
        stadium_name=a;
    }

    void set_team_name(string a){
        team_teame=a;
    }

    void set_street_address(string a){
        street_address=a;
    }

    void set_city_state_zip(string a){
        city_state_zip=a;
    }

    void set_box_office(string a){
        box_office=a;
    }

    void set_date_opened(string a){
        date_opened=a;
    }

    void set_seating_capacity(int a){
        seating_capacity=a;
    }

    string get_stadium_name(){
        return stadium_name;
    }

    string get_team_name(){
        return team_teame;
    }

    string get_street_address(){
        return street_address;
    }

    string get_city_state_zip(){
        return city_state_zip;
    }

    string get_box_office(){
        return box_office;
    }

    string get_date_opened(){
        return date_opened;
    }

    int get_seating_capacity(){
        return seating_capacity;
    }
};
#endif // STADIUM_H
