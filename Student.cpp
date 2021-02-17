#include "Student.h"

using namespace std;

Student::Student()
{

}

Student::Student(string firstName, string middleName, string lastName, int student_ID)
{
    fName = firstName;
    mName = middleName;
    lName = lastName;
    ID = student_ID;
}
