#include <iostream>
#include <fstream>
#include "User.h"
#include "Role.h"
#include <vector>

User login() {
    std::vector<vector<string>> userArr;
    // Reading the user credentials and saved to an array
    std::ifstream inFile("UserInfo.txt");

    if (inFile.is_open()) {
        std::string username, password, role;

        // Read each word separated by whitespace (spaces, tabs, newlines)
        while (inFile >> username >> password >> role) {
            userArr.push_back({ username, password, role });
        }

        inFile.close(); // Don't forget to close the file
    }
    else {
        std::cout << "Failed to open the file." << std::endl;
    }
    while (true) {
        string username, password;
        std::cout << "-" << endl;
        std::cout << "Enter your username: ";
        std::cin >> username;
        std::cout << "Enter your password: ";
        std::cin >> password;
        std::cout << "-" << endl;
        for (int i = 0; i < userArr.size(); i++) {
            if (userArr[i][0] == username && userArr[i][1] == password) {
                return User(username, password, userArr[i][2]);
            }
        }
    }
}

void mainMenu() {
    User loginUser;
    Role role;
    while (true) {
        int action;
        cout << "1. Login" << endl;
        cout << "2. Logout" << endl;
        cout << "3. Action Menu" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose your action: ";
        cin >> action;
        if (action == 1) {
            loginUser = login();
        }
        else if (action == 2) {
            User temp;
            loginUser = temp;
        }
        else if (action == 3) {
            role.actionMenu(loginUser.getRole());
        }
        else {
            break;
        }
    }
}


int main()
{
    mainMenu();

    return 0;
}

