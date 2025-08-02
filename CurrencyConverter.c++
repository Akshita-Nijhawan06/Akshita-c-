#include <iostream>
using namespace std;

int main() {
    float usd, rate = 82.5; // Example: USD to INR rate
    cout << "Enter USD: "; cin >> usd;
    cout << usd << " USD = " << usd * rate << " INR" << endl;
    return 0;
}
