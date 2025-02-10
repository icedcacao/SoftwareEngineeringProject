#include "User.h"


using namespace std;

User::User() {
	this->username = "";
	this->password = "";
	this->role = "";
}

User::User(const string& username, const string& password, const string& role) {
	this->username = username;
	this->password = password;
	this->role = role;
}



string User::getRole() {
	return role;
}
