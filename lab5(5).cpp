#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Enter a number: ";
    cin >> input;

    int intValue = stoi(input);
    long longValue = stol(input);
    float floatValue = stof(input);

    cout << "Integer value: " << intValue << endl;
    cout << "Long value: " << longValue << endl;
    cout << "Float value: " << floatValue << endl;

    return 0;
}
