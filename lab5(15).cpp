#include <iostream>

using namespace std;

// Перевантажена функція для перевірки рівності між двома цілими числами
bool isEqual(int a, int b) {
    return a == b;
}

// Перевантажена функція для перевірки рівності між двома дійсними числами
bool isEqual(double a, double b) {
    return a == b;
}

// Перевантажена функція для перевірки рівності між двома символами
bool isEqual(char a, char b) {
    return a == b;
}

int main() {
    cout << boolalpha; // Для виведення true/false замість 1/0

    // Приклади викликів функцій для різних типів даних
    cout << "Integers: " << isEqual(5, 5) << endl; // Виведе true
    cout << "Doubles: " << isEqual(3.14, 3.14) << endl; // Виведе true
    cout << "Characters: " << isEqual('A', 'B') << endl; // Виведе false

    return 0;
}
