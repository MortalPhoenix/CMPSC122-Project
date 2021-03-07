#include <iostream>
#include <String>

using namespace std;

class phoneNumber
{
	//PRIVATE
private:
	string pNumber;
	string numberType;
	int p_ID;


public:

	//constructor
	phoneNumber();
	phoneNumber(string pNumber, string numberType, int pID);

	//getters
	string get_pNumber() const;
	string get_NumberType() const;
	int get_pID();
	//setters
	void set_pNumber(string newNum);
	void set_NumberType(string newType);
	void set_pID(int ID1);

	void displayPNumber();


};
