#include <iostream>
#include <String>

using namespace std;

class mailingAddress
{
    public:
    mailingAddress();
    mailingAddress(string city, string state, int zip, string type);

    void newCity(string newCity);
    void newState(string newState);
    void newType(string newType);
    void newZip(int newZip);

    string getCity();
    string getState();
    string getType();
    int getZip();

    void setCity(string setCity);
    void setState(string setState);
    void setType(string setType);
    void setZip(int setZip);

    private:
    string City, State, Type;
    int Zip;
};