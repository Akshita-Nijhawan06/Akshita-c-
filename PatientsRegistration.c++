#include <iostream>
#include <vector>
using namespace std;

struct Patient {
    string name;
    int age;
};

int main() {
    vector<Patient> pts;
    int choice;
    do {
        cout << "1.Register 2.View All 3.Exit: ";
        cin >> choice;
        if(choice == 1) {
            Patient p;
            cout << "Name: "; cin >> p.name;
            cout << "Age: "; cin >> p.age;
            pts.push_back(p);
        } else if(choice == 2) {
            for(const auto& p : pts)
                cout << "Name: " << p.name << ", Age: " << p.age << endl;
        }
    } while(choice != 3);
    return 0;
}
