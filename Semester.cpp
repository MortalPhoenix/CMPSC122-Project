#include "Semester.h"
#include <iostream>


Semester::Semester() {

}

Semester::Semester(string season1, int year1, int s_ID1) {

    Season = season1;
    Year = year1;
    s_ID = s_ID1;

}


//Getters

int Semester::getYear() {
    return Year;
}

string Semester::getSeason(){
    return Season;
}

int Semester::getId() {
    return s_ID;
}



//Setters

void Semester::set_Season(string setSeason) {
    Season = setSeason;

}


void Semester::set_Year(int setYear) {
    Year = setYear;

}

void Semester::set_semID(int setID) {
    s_ID = setID;
}

void Semester::displaySemester() {
    cout << "Started on " << Season << "of " << Year << endl;

}