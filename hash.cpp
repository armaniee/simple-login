#include <bits/stdc++.h>
using namespace std;

// simple nooby hash
string hashPassword(const string &pass) {
    hash<string> h;
    return to_string(h(pass));
}

int main() {
    unordered_map<string, string> db; // username -> hashed password

    int choice;
    while (true) {
        cout << "\n1. Register\n2. Login\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            string user, pass;
            cout << "Enter username: ";
            cin >> user;
            cout << "Enter password: ";
            cin >> pass;

            db[user] = hashPassword(pass);
            cout << "User registered.\n";
        }

        else if (choice == 2) {
            string user, pass;
            cout << "Enter username: ";
            cin >> user;
            cout << "Enter password: ";
            cin >> pass;

            if (db.count(user) && db[user] == hashPassword(pass))
                cout << "Login successful.\n";
            else
                cout << "Invalid credentials.\n";
        }

        else break;
    }
}
