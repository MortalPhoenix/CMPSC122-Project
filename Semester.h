#pragma once
#include <String>
using namespace std;

class Semester
{
private:
    string Season;
    int Year;
    int s_ID;


public: 
    //Constructor 
    Semester();
    Semester(string season1, int year, int s_ID);

    //getters
    int getYear();
    string getSeason();
    int getId();

    //setters
    void set_Season(string setSeason);
    void set_Year(int setYear);
    void set_semID(int setID);

    //display 
    void displaySemester();
};

