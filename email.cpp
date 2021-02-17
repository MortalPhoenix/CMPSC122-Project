#include "email.h"
#include <String>

using namespace std;

email::email() {
	userName = "smaple";
	emailType = "sample";
}
email::email(string userName1, string emailType1) {
	userName = userName;
	emailType = emailType1;

}//getters
string email::get_userName() const {
	return userName;
}
string email::get_emailType() const {
	return emailType;
}

//setters
void email::set_userName(string newUser) {
	userName = newUser;
}
void email::set_emailType(string emailType1) {
	emailType = emailType1;
}


