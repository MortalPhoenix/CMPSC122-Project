#pragma once


#include <string>
using namespace std;

class mailingAddress
{
private:
    string city_mA, state_mA, type_mA, streetAddress;
    int zip;
    int mA_Id;
   

public:

    //constructor 
    mailingAddress();
    mailingAddress(string StreetAddress, string city, 
        string state, int zip, string type, int id);



    // getters
    string get_City();
    string get_State();
    string get_Type();
    string get_StreetAdress();
    int get_Zip();
    int get_mA_ID();

    //setters
    void set_City(string setCity);
    void set_State(string setState);
    void set_Type(string setType);
    void set_Zip(int setZip);
    void set_mA_ID(int setZip);
    void set_StreetAdress(string StreetAdd);


    //Display
    void displayAdress();

};

