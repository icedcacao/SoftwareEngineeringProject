#include "Role.h"

Role::Role() {
	this->schedule = {};
}

vector<vector<string>> Role::getSchedule() {

	return schedule;
}

void Role::addSchedule(vector<string> schedule) {
	this->schedule.push_back(schedule);
}

void Role::deleteSchedule(int row) {
	if (row >= 0 && row < this->schedule.size()) {
		this->schedule.erase(this->schedule.begin() + row);
	}
}

void Role::actionMenu(string role) {
	if (role == "RegFaculty" || role == "TempFaculty") {
		int action1;
		cout << "1. Get Schedule" << endl;
		cout << "2. Exit" << endl;
		cout << "Enter your action: ";
		cin >> action1;
		if (action1 == 1) {
			cout << "---" << endl;
			for (int i = 0; i < this->schedule.size(); i++) {
				for (int j = 0; j < this->schedule[i].size(); j++) {
					cout << this->schedule[i][j] << " ";
				}
				cout << endl;
			}
			cout << "---" << endl;
		}
	}
	if (role == "Chair" || role == "Dean") {
		int action1;
		cout << "1. Get Schedule" << endl;
		cout << "2. Add Schedule" << endl;
		cout << "3. Delete Schedule" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your action: ";
		cin >> action1;
		if (action1 == 1) {
			cout << "---" << endl;
			for (int i = 0; i < this->schedule.size(); i++) {
				for (int j = 0; j < this->schedule[i].size(); j++) {
					cout << this->schedule[i][j] << " ";
				}
				cout << endl;
			}
			cout << "---" << endl;
		}
		else if (action1 == 2) {
			string username, time, details;
			cout << "Enter username: ";
			cin >> username;
			cout << "Enter time: ";
			cin >> time;
			cout << "Enter details: ";
			cin >> details;
			addSchedule({ username, time, details });
		}
		else if (action1 == 3) {
			int deleteRow;
			cout << "Enter delete row: ";
			cin >> deleteRow;
			deleteSchedule(deleteRow);
		}
	}

}