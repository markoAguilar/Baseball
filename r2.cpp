#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void updateStadiums();

Container<Stadium> stadiums;

int main()
{
    cout << updateStadiums();
    return EXIT_SUCCESS;
}
/***********************************************************
 * ACCESSOR: updateStadiums()
 ***********************************************************
 * This function will read from the Baseball_League_Stadium
 * file and read all the information to push_back() into our
 * Stadium container class for use throughout the program.
 ***********************************************************
 *  PRE-CONDITIONS:
 *      NONE
 *  POST-CONDITIONS:
 *      Our program's Container class of type Stadium will be
 *      filled with Stadium objects that contain the data
 *      extracted from the Baseball_League_Stadium file.
 **********************************************************/
void updateStadiums()
{
    ifstream source;
    source.open("Baseball_League_Stadium.txt");
    string line;
    string contents;

    cout << "IN" << endl;
    while(!source.eof())
    {
        getline(source, line, '\r');
    }
    cout << "OUT" << endl;
    source.close();
}
