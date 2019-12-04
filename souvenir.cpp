#include "souvenir.h"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;
//read item from file
void souvenir::read(){
	a.clear();
	ifstream infile;
	infile.open("Baseball_Souvenir.txt");
	if(!infile)
		cout<<"fail"<<endl;
	souve temp;
	string price;
	while(!infile.eof()){
		getline(infile,temp.name,'\n');
		getline(infile,price,'\n');
		temp.price=stod(price);
		a.push_back(temp);
	}
	infile.close();
}

//add item by index to the file
void souvenir::add_item(int index){
	ofstream outfile;
	outfile.open("history.txt",ios::app);
	if(!outfile)
		cout<<"fail"<<endl;
	outfile<<a[index].name<<endl;
	outfile<<to_string(a[index].price)<<endl;
	outfile.close();
}

//return a whole string for puchase history
string souvenir::calc(){
	ifstream infile;
	string file="";
	double total=0.0;
	infile.open("history.txt",ios::app);
	if(!infile)
		exit(0);
	string name;
	string price;
	while(!infile.eof()){
		getline(infile,name,'\n');
		getline(infile,price,'\n');
		if(name!=""){
		file=file+name+'\n'+price+'\n';
		total+=stod(price);
		}
	}
	infile.close();
    file+=to_string(total)+'\n';
	return file;
}
