#include <iostream>
#include <string>
#include "semester.h"

semester::semester()
{

}

semester::semester(string season, int year)
{
    Season = season;
    Year = year;
}

void semester::setSeason(string setSeason)
{
    Season = setSeason;
}

string semester::getSeason()
{
    return Season;
}

void semester::setYear(int setYear)
{
    Year = setYear;
}

int semester::getYear()
{
    return Year;
}

void semester::changeSeason(string newSeason)
{
    Season = newSeason;
}

void semester::changeYear(int newYear)
{
    Year = newYear;
}