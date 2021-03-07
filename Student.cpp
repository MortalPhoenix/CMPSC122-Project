#include "Student.h"
#include <iostream>
#include <string>


Student::Student(){}

Student::Student(string name1, string major1, string minor1, string student_UserName1, string
	status1, int ID1) {

	name = name1;
	major = major1;
	minor = minor1;
	student_UserName = student_UserName1;
	status = status1;
	stu_ID = ID1;
}


//Setters

void Student::set_name(string name1) {
	name = name1;
}


void Student::set_major(string major1) {

	major = major1;
}

void Student::set_minor(string minor1) {
	minor = minor1;
}

void Student::set_status(string status1) {
	status = status1;
}

void Student::set_studentUName(string userName1) {
	student_UserName = userName1;
}

void Student::set_stu_ID(int newID) {
	stu_ID = newID;
}

//getters

string Student::get_name() {
	return name;
}

string Student::get_major() {
	return major;
}

string Student::get_minor() {
	return minor;
}

string Student::get_studentUName() {
	return student_UserName;
}

string Student::get_status() {
	return status;
}

int Student::get_stu_ID() {
	return stu_ID;
}

void Student::displayStudent() {
	cout << "Student Name: " << name << endl;
	cout << "Student Username: " << student_UserName << endl;
	cout << "Student ID: " << stu_ID << endl;
	cout << "Intended Major: " << major << endl;
	cout << "Intended Minor " << minor << endl;
	cout << "Status: " << status << endl;

}