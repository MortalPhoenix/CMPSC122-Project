
#include <cstdlib>

using namespace std;

class Date
{

private: 
	int month, day, year, date_ID;


public: 
	//constructors
	Date();
	Date(int month, int day, int year, int date_ID);

	//setters
	void setDate(int month, int day, int year);
	void setID(int ID);

	//getters
	int getDate();
    int getID();

	//display
	void printDate();

};

