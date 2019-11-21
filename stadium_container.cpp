#include "stadium_container.h"

stadium_container::stadium_container(){}

void stadium_container::addStadium(string stadium_type, string stadium_name, string team_name,
                                   string street_address, string city_state_zip, string box_office,
                                   string date_opened, string seating_capacity, string grass_type, stadium_container& stadium)
{
    Stadium toAdd;
    toAdd.set_stadium_type(stadium_type);
    toAdd.set_stadium_name(stadium_name);
    toAdd.set_team_name(team_name);
    toAdd.set_street_address(street_address);
    toAdd.set_city_state_zip(city_state_zip);
    toAdd.set_box_office(box_office);
    toAdd.set_date_opened(date_opened);
    toAdd.set_seating_capacity(seating_capacity);
    toAdd.set_grass_type(grass_type);
    stadium.add(toAdd);
}
