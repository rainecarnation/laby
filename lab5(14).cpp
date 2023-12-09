#include <iostream>

using namespace std;

// Функція для додавання двох чисел; друге число має значення за промовчанням 10
int addNumbers(int a, int b = 10) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 7;

    // Виклик функції з двома аргументами
    int sum1 = addNumbers(x, y);
    cout << "Sum with both arguments: " << sum1 << endl;

    // Виклик функції з одним аргументом (значенням за промовчанням)
    int sum2 = addNumbers(x);
    cout << "Sum with default argument: " << sum2 << endl;

    return 0;
}
