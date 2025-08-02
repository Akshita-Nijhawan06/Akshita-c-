#include <iostream>
using namespace std;

int main() {
    string s, rev;
    cout << "Enter string: "; cin >> s;
    rev = string(s.rbegin(), s.rend());
    if(s == rev) cout << "Palindrome!" << endl;
    else cout << "Not a palindrome." << endl;
    return 0;
}
