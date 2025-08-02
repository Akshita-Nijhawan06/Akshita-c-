#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;
    cout << "Enter first number, operator(+ - * /), second number: ";
    cin >> num1 >> op >> num2;
    switch(op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': if(num2 != 0) cout << num1 / num2; else cout << "Error: Division by zero!"; break;
        default: cout << "Invalid operator!";
    }
    return 0;
}
