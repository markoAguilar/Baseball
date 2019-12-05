#ifndef FILES_H
#define FILES_H

#include <QFile>
#include <QTextStream>
#include <QResource>
#include <QString>
#include "souvenir_container.h"
#include "stadium_container.h"
#include <iostream>

using namespace std;

void importStadium(QString fileName, stadium_container& stadium);
void importSouvenir(QString fileName, souvenir_container& souvenir);
void saveStadium (QString fileName, stadium_container& stadium);
void saveSouvenir (QString fileName, souvenir_container& souvenir);

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

void importSouvenir(QString fileName, souvenir_container& souvenir) {
    QString temp;
    Souvenir toAdd;
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
            toAdd.set_souvenir_name(temp.toStdString());
            count++;
        }else if(count == 1)
        {
            toAdd.set_souvenir_price(temp.toStdString());
            souvenir.add(toAdd);
            count = 0;
        }
    }
}

void saveStadium (QString fileName, stadium_container& stadium) {
    QFile inFile(fileName);
    QTextStream outstream(&inFile);

    inFile.open(QIODevice::WriteOnly | QIODevice::Text);

    for(int i = 0; i < stadium.getSize(); i++)
    {
        outstream << QString::fromStdString(stadium[i].get_stadium_type()) << endl;
        outstream << QString::fromStdString(stadium[i].get_stadium_name()) << endl;
        outstream << QString::fromStdString(stadium[i].get_team_name()) << endl;
        outstream << QString::fromStdString(stadium[i].get_street_address()) << endl;
        outstream << QString::fromStdString(stadium[i].get_city_state_zip()) << endl;
        outstream << QString::fromStdString(stadium[i].get_box_office()) << endl;
        outstream << QString::fromStdString(stadium[i].get_date_opened()) << endl;
        outstream << QString::fromStdString(stadium[i].get_seating_capacity()) << endl;
        outstream << QString::fromStdString(stadium[i].get_grass_type()) << endl;
    }
    inFile.close();
}

void saveSouvenir (QString fileName, souvenir_container& souvenir) {
    QFile inFile(fileName);
    QTextStream outstream(&inFile);

    inFile.open(QIODevice::WriteOnly | QIODevice::Text);

    for(int i = 0; i < souvenir.getSize(); i++)
    {
        outstream << QString::fromStdString(souvenir[i].get_souvenir_name()) << endl;
        outstream << QString::fromStdString(souvenir[i].get_souvenir_price()) << endl;
    }
    inFile.close();
}

#endif // FILES_H
