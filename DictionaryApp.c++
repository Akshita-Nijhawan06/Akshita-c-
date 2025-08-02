#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> dict;
    int ch;
    string word, meaning;
    do {
        cout << "1.Add 2.Find 3.Exit: "; cin >> ch;
        if(ch == 1) {
            cout << "Word: "; cin >> word;
            cout << "Meaning: "; cin >> meaning;
            dict[word] = meaning;
        } else if(ch == 2) {
            cout << "Word: "; cin >> word;
            if(dict.count(word))
                cout << "Meaning: " << dict[word] << endl;
            else
                cout << "Not found." << endl;
        }
    } while(ch != 3);
    return 0;
}
