#include "mailingAddress.h"
#include <iostream>
using namespace std;

mailingAddress::mailingAddress(){}

mailingAddress::mailingAddress(string StreetAddress1, string city1,
    string state1, int zip1, string type1, int id1) {
 
    streetAddress = StreetAddress1;
    city_mA = city1;
    state_mA = state1;
    zip = zip1;
    type_mA = type1;
    mA_Id = id1;

}



// getters
string mailingAddress::get_City() {
    return city_mA;
}
string mailingAddress::get_State() {
    return state_mA;
}
string mailingAddress::get_Type() {
    return type_mA;
}
string mailingAddress::get_StreetAdress() {
    return streetAddress;
}
int mailingAddress::get_Zip() {
    return zip;
}
int mailingAddress::get_mA_ID() {
    return mA_Id;
}

//setters
void  mailingAddress::set_City(string setCity) {

    city_mA = setCity;
}
void  mailingAddress::set_State(string setState) {
    state_mA = setState;
}
void  mailingAddress::set_Type(string setType) {
    type_mA = setType;
}
void  mailingAddress::set_Zip(int setZip) {
    zip = setZip;
}
void  mailingAddress::set_mA_ID(int set_ID) {
    mA_Id = set_ID;
}
void  mailingAddress::set_StreetAdress(string StreetAdd) {
    streetAddress = StreetAdd;

}

void mailingAddress::displayAdress() {

    cout << "Adress is: " << streetAddress << " " << city_mA << ", " << state_mA << endl;
    cout << "Zip code: " << zip << endl;
    cout << "Type: " << type_mA << endl;


}
