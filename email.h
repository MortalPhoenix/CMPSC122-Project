#pragma once
#include <String>
using namespace std;
class email
{
	
private:
	string userName; 
	string emailType; 

public:
	email();
	email(string userName, string emailType);

	//getters
	string get_userName() const;
	string get_emailType() const;

	//setters
	void set_userName(string newNum);
	void set_emailType(string emailType);


};

