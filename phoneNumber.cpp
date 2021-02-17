
#include "phoneNumber.h"
#include <String>
#include <iostream>
using namespace std;


phoneNumber::phoneNumber() {
	pNumber = "sample";
	numberType = "Sample";

}
phoneNumber::phoneNumber(string pNumber1, string numberType1) {


	pNumber = pNumber1;
	numberType = numberType1;

}



//getters
string phoneNumber::get_pNumber() const {
	return pNumber;

}
string phoneNumber::get_NumberType() const {
	return numberType;
}

//setters
void phoneNumber::set_pNumber(string newNum) {
	pNumber = newNum;
}
void phoneNumber::set_NumberType(string newType) {
	numberType = newType;
}


