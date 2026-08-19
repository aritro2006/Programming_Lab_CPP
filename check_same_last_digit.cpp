#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two non-negative integers: ";
    cin >> a >> b;

    if (a % 10 == b % 10)
        cout << "Both numbers have the same last digit";
    else
        cout << "Both numbers do not have the same last digit";

    return 0;
}