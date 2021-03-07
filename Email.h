#pragma once
#include <String>
using namespace std;
class Email
{
private: 
	string userName;
	string emailType;
	int email_ID;

public:
	//constructor
	Email();
	Email(string userName, string emailType, int email_ID);

	//getters 
	string get_userName() const;
	string get_emailType() const;
	int get_EmailID() const;

	//setters
	void set_userName(string user);
	void set_emailType(string type);
	void set_EmailID(int id);

};

