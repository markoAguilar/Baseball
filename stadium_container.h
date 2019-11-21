#ifndef STADIUM_CONTAINER_H
#define STADIUM_CONTAINER_H

#include <cstdlib>
#include "container.h"
#include "stadium.h"

class stadium_container : public container<Stadium>{
public:
    stadium_container();
    void addStadium(string stadium_type, string stadium_name, string team_name,
                    string street_address, string city_state_zip, string box_office,
                    string date_opened, string seating_capacity, string grass_type, stadium_container& stadium);
};

#endif // STADIUM_CONTAINER_H
