#include "souvenir_container.h"

souvenir_container::souvenir_container(){}

void souvenir_container::addItem(string souvenir_name, string souvenir_price, souvenir_container& souvenir) {
    Souvenir toAdd;
    toAdd.set_souvenir_name(souvenir_name);
    toAdd.set_souvenir_price(souvenir_price);
    souvenir.add(toAdd);
}

void souvenir_container::removeItem(string souvenir_name, souvenir_container& souvenir) {
    bool found = false;
    for(int i = 0; i < souvenir.getSize() && !found; i++)
    {
        if(souvenir_name == souvenir[i].get_souvenir_name())
        {
            souvenir.remove(i);
            found = true;
        }
    }
}
