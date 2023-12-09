#include <iostream>

using namespace std;

void doubleNumber(int num) {
    num *= 2;
    cout << "Inside the function: " << num << endl;
}

int main() {
    int number = 5;
    cout << "Before function call: " << number << endl;

    doubleNumber(number);

    cout << "After function call: " << number << endl;

    return 0;
}
