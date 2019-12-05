#ifndef SOUVENIR_CONTAINER_H
#define SOUVENIR_CONTAINER_H

#include <container.h>
#include <souvenir.h>

class souvenir_container : public container<Souvenir>{
public:
    souvenir_container();
    void addItem(string souvenir_name, string souvenir_price, souvenir_container& souvenir);
    void removeItem(string souvenir_name, souvenir_container& souvenir);
};

#endif // SOUVENIR_CONTAINER_H
