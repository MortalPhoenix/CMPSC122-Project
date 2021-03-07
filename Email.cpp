#include "Email.h"


Email::Email() {

}

Email::Email(string userName1, string emailType1, int email_ID1) {

	userName = userName1;
	emailType = emailType1;
	email_ID = email_ID1;
}


/*
//constructor
	Email();
	Email(string userName, string emailType, int email_ID);

	//getters
	string get_userName() const;
	string get_emailType() const;
	int get_EmailID() const;

	//setters
	void set_userName();
	void set_emailType();
	void set_EmailID();*/


string Email::get_userName() const {

	return userName;
}

string Email::get_emailType() const {

	return emailType;
}

int Email::get_EmailID() const {
	return email_ID;
}

void Email::set_userName(string user) {
	userName = user;
}
void Email::set_emailType(string type) {
	emailType = type;
}
void Email::set_EmailID(int id) {
	email_ID = id;
}