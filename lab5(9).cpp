#include <iostream>

using namespace std;

int myFunc(int x);

int main() {
    int x, y;
    x = 5;
    y = myFunc(x);
    cout << "Result: " << y << endl;
    return 0;
}

int myFunc(int a) {
    return 4 * a;
}
