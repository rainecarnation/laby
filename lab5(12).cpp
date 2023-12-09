#include <iostream>

using namespace std;

inline int getNumericValue(char ch) {
    return static_cast<int>(ch);
}

int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    int numericValue = getNumericValue(inputChar);

    cout << "Numeric value of the entered character: " << numericValue << endl;

    return 0;
}
