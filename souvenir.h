#ifndef SOUVENIR_H
#define SOUVENIR_H
#include <string>
#include <vector>
using namespace std;
struct souve{
	string name;
	double price;
};
class souvenir{
private:
	vector<souve> a;
public:
	void read();
	void add_item(int index);
	string calc();
};
#endif // SOUVENIR_H