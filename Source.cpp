#include "Date.h"
#include "Email.h"
#include "mailingAddress.h"
#include "phoneNumber.h"
#include "Semester.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main() {
	int studentId = 123923;

	Date a;
	a.setDate(1, 2, 3003);
	a.printDate();
	a.setID(studentId);

	cout << "\n";

	Email b;
	b.set_EmailID(123);
	b.set_emailType("Work");
	b.set_userName("123@psu.edu");
	b.set_EmailID(studentId);
	cout << b.get_EmailID() << endl;
	cout <<  b.get_emailType() << endl;
	cout <<  b.get_userName() << endl;

	cout << "\n";
	
	mailingAddress c; 
	c.set_City("Toronto");
	c.set_State("New_Vegas");
	c.set_StreetAdress("420_Simp_Avenue");
	c.set_Type("Fictional");
	c.set_Zip(11337);
	c.set_mA_ID(studentId);

	c.displayAdress();

	cout << "\n";
	
	phoneNumber d;
	d.set_pNumber("610-555-3332");
	d.set_pID(studentId);
	d.set_NumberType("Cell");

	d.displayPNumber();

	cout << "\n";

	Semester e;
	e.set_Season("Spring");
	e.set_semID(studentId);
	e.set_Year(2019);
	e.displaySemester();

	cout << "\n";

	Student f;
	f.set_name("Joe Smith");
	f.set_stu_ID(studentId);
	f.set_studentUName("js5334");
	f.set_major("Comp Sci");
	f.set_minor("Music");
	f.set_status("Enrolled");
	f.displayStudent();


	cout << "\n";



	
	
	
	return 0;
	}