#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string options[3] = {"Rock", "Paper", "Scissor"};
    int user, comp;
    cout << "Enter 0 for Rock, 1 for Paper, 2 for Scissor: ";
    cin >> user;
    comp = rand() % 3;
    cout << "Computer chose: " << options[comp] << endl;
    if (user == comp)
        cout << "It's a draw!" << endl;
    else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1))
        cout << "You win!" << endl;
    else
        cout << "You lose!" << endl;
    return 0;
}
