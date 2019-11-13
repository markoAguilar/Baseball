#include "stadium.h"

Stadium::Stadium(){}

Stadium::Stadium(string stadiumType,
                 string stadiumName,
                 string teamName,
                 string streetAddress,
                 string cityStateZip,
                 string boxOffice,
                 string dateOpened,
                 string seatingCapacity,
                 string grassType) {
    this->stadium_type = stadiumType;
    this->stadium_name = stadiumName;
    this->team_name = teamName;
    this->street_address = streetAddress;
    this->city_state_zip = cityStateZip;
    this->box_office = boxOffice;
    this->date_opened = dateOpened;
    this->seating_capacity = seatingCapacity;
    this->grass_type = grassType;
}
