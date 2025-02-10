#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

// Schedule have the form of [username, time, details] as an array
class Role
{
private: 
	vector<vector<string>> schedule;
public:
	Role();
	vector<vector<string>> getSchedule();
	// Action -> Add / Delete schedule
	void addSchedule(vector<string> schedule);
	void deleteSchedule(int row);
	void actionMenu(string role);
};

