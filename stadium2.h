#include "stadium.h"

Stadium::Stadium()
{
        stadium_name="N/A";
        team_teame="N/A";
        street_address="N/A";
        city_state_zip="N/A";
        box_office="N/A";
        date_opened="N/A";
        seating_capacity=0;
}

Stadium::Stadium(const Stadium& source)
{
    this->stadium_type = source.stadium_type;
    this->stadium_name = source.stadium_name;
    this->team_name = source.team_name;
    this->street_address = source.street_address;
    this->city_state_zip = source.city_state_zip;
    this->box_office = source.box_office;
    this->date_opened = source.date_opened;
    this->seating_capacity = source.seating_capacity;
}

ostream& operator<<(ostream out, const Stadium& stadium)
{
    out << this->stadium_type << "\n"
    <<  this->stadium_name << "\n"
    <<  this->team_name << "\n"
    <<  this->street_address << "\n"
    <<  this->city_state_zip << "\n"
    <<  this->box_office << "\n"
    <<  this->date_opened << "\n"
    <<  this->seating_capacity << "\n";
    return out;
}
