#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name, phone;
};

int main() {
    vector<Contact> contacts;
    int choice;
    do {
        cout << "1.Add 2.View 3.Exit: ";
        cin >> choice;
        if(choice == 1) {
            Contact c;
            cout << "Enter name: "; cin >> c.name;
            cout << "Enter phone: "; cin >> c.phone;
            contacts.push_back(c);
        } else if(choice == 2) {
            for(auto& c : contacts) {
                cout << "Name: " << c.name << ", Phone: " << c.phone << endl;
            }
        }
    } while(choice != 3);
    return 0;
}
