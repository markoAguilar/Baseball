#include <iostream>
#include <sstream>
#include <fstream>
#include "container.h"
using namespace std;

void updateStadiums();

//Container<Stadium> stadiums;

int main()
{
    updateStadiums();
    return EXIT_SUCCESS;
}

/***********************************************************
 * ACCESSOR: updateStadiums()
 ***********************************************************
 * This function will read from the data
 * file and read all the information to push_back() into our
 * Stadium container class for use throughout the program.
 ***********************************************************
 *  PRE-CONDITIONS:
 *      NONE
 *  POST-CONDITIONS:
 *      Our program's Container class of type Stadium will be
 *      filled with Stadium objects that contain the data
 *      extracted from the data file.
 **********************************************************/
void updateStadiums()
{
    ifstream source;
    source.open("data.txt");
    string stadium_Type;
    string stadium_Name;
    string stadium_
    string contents;

    while(!source.eof())
    {
        getline(source, stadium_Type, '\n');
        
        //cout << "LINE: " << line << endl;
        //now do getline(source, line ' ' or '\n')
        //for the other pieces of information that will
        //be used to create a stadium object
        //stadiums.add(Stadium())
    }
    source.close();
}
