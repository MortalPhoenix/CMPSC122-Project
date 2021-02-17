#include <iostream>
#include <string>
#include "mailingAddress.h"

using namespace std;

mailingAddress::mailingAddress()
{

}

mailingAddress::mailingAddress(string city, string state, int zip, string type)
{
    City = city;
    State = state;
    Zip = zip;
    Type = type;
}

void mailingAddress::newCity(string newCity)
{
    City = newCity;
}

void mailingAddress::newState(string newState)
{
    State = newState;
}

void mailingAddress::newType(string newType)
{
    Type = newType;
}

void mailingAddress::newZip(int newZip)
{
    Zip = newZip;
}

string mailingAddress::getCity()
{
    return City;
}

string mailingAddress::getState()
{
    return State;
}

string mailingAddress::getType()
{
    return Type;
}

int mailingAddress::getZip()
{
    return Zip;
}

void mailingAddress::setCity(string setCity)
{
    City = setCity;
}

void mailingAddress::setState(string setState)
{
    State = setState;
}

void mailingAddress::setType(string setType)
{
    Type = setType;
}

void mailingAddress::setZip(int setZip)
{
    Zip = setZip;
}