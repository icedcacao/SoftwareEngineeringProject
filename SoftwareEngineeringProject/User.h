#pragma once

#include <string>

using namespace std;

class User
{
private:
	string username;
	string password;
	string role;

public:
	User(const string& username, const string& password, const string& role);
	User();
	string getRole();
};

