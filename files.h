#ifndef FILES_H
#define FILES_H

#include <QFile>
#include <QTextStream>
#include <QResource>
#include <QString>
#include "stadium_container.h"
#include <iostream>

using namespace std;

void importStadium(QString fileName, stadium_container& stadium);

void importStadium(QString fileName, stadium_container& stadium) {
    QString temp;
    Stadium toAdd;
    int count = 0;
    QFile inFile(fileName);
    QTextStream in(&inFile);

    if (!inFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }

    while(!in.atEnd())
    {
        temp = in.readLine();
        if(count == 0)
        {
            toAdd.set_stadium_type(temp.toStdString());
            count++;
        }else if(count == 1)
        {
            toAdd.set_stadium_name(temp.toStdString());
            count++;
        }else if(count == 2)
        {
            toAdd.set_team_name(temp.toStdString());
            count++;
        }else if(count == 3)
        {
            toAdd.set_street_address(temp.toStdString());
            count++;
        }
        else if (count == 4) {
            toAdd.set_city_state_zip(temp.toStdString());
            count++;
        }
        else if (count == 5) {
            toAdd.set_box_office(temp.toStdString());
            count++;
        }
        else if (count == 6) {
            toAdd.set_date_opened(temp.toStdString());
            count++;
        }
        else if (count == 7) {
            toAdd.set_seating_capacity(temp.toStdString());
            count++;
        }
        else if (count == 8) {
            toAdd.set_grass_type(temp.toStdString());
            stadium.add(toAdd);
            count = 0;
        }
    }
    inFile.close();
}

#endif // FILES_H
