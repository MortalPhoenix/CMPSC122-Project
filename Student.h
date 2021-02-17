#include <iostream>
#include <String>
#include <cstdlib>
#include <ctime>
#include "mailingAddress.h"
#include "semester.h"
// #include "phoneNumber.h"
// #include "email.h"

using namespace std;

class Student
{
    private:
    //Constructor
    Student();
    Student(string fName, string mName, string lName, int ID);

    public:
    mailingAddress address1;
    semester s1;
    string fName, mName, lName, major, minor, status;
    int ID;
    // time_t bDay, acceptanceData;
};