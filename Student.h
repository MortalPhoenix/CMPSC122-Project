#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student
{

	private: 
		string name;
		string major;
		string minor;
		string student_UserName;
		string status;
		int stu_ID;

public:

	//constructors
	Student();
	Student(string name, string major, string minor, string student_UserName, string
		status, int ID);

	//setters
	void set_name(string name1);
	void set_major(string major1);
	void set_minor(string minor1);
	void set_studentUName(string uName1);
	void set_status(string status2);
	void set_stu_ID(int ID1);

	//getters
	string get_name();
	string get_major();
	string get_minor();
	string get_studentUName();
	string get_status();
	int get_stu_ID();

	
	//display 

	void displayStudent();


};

