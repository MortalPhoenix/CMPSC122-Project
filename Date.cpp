#include "Date.h"
#include <iostream>



Date::Date() {

}

Date::Date(int mm, int dd, int yy, int date_ID2) {

}

void Date::setDate(int mm, int dd, int yy) {
	month = mm;
	day = dd;
	year = yy;
}

void Date::setID(int ID) {

	date_ID = ID;
}

int Date::getDate() {
	return month;
	return day;
	return year;
}


int Date::getID() {
	return date_ID;

}

void Date::printDate() {
	cout << "Date is " << month << "/" << day << "/" << year << endl;
}