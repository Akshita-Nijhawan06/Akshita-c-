#include <iostream>
using namespace std;

int main() {
    float balance = 1000.0;
    int choice;
    float amount;
    do {
        cout << "1.Deposit 2.Withdraw 3.Balance 4.Exit: ";
        cin >> choice;
        if(choice == 1) {
            cout << "Amount: "; cin >> amount; balance += amount;
        } else if(choice == 2) {
            cout << "Amount: "; cin >> amount;
            if(amount <= balance) balance -= amount;
            else cout << "Insufficient balance!" << endl;
        } else if(choice == 3) {
            cout << "Balance: " << balance << endl;
        }
    } while(choice != 4);
    return 0;
}
