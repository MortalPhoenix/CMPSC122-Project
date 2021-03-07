#include "phoneNumber.h"

phoneNumber::phoneNumber(){}

phoneNumber::phoneNumber(string pNumber1, string numberTyp1e, int pID1) {

	pNumber = pNumber1;
	numberType = numberTyp1e;
	p_ID = pID1;
}



//Getters

string phoneNumber::get_pNumber() const {

	return pNumber;
}

string phoneNumber::get_NumberType() const {
	return numberType;

}


int phoneNumber::get_pID()  {

	return p_ID;
}

void phoneNumber::set_pNumber(string newNum) {

	pNumber = newNum;
}

void phoneNumber::set_NumberType(string newType) {
	numberType = newType;

}

void phoneNumber::set_pID(int ID1) {
	p_ID = ID1;

}


void phoneNumber::displayPNumber() {

	cout << "PhoneNumber: " << " " << pNumber;
	cout << "Type: " << " " << numberType;

}

/*
	void displayPNumber();
*/