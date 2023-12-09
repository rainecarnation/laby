#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        return -1; // Повертаємо -1, якщо знаменник рівний 0
    }
    else {
        return dividend / divisor; // Повертаємо результат ділення
    }
}

int main() {
    int num1, num2;
    cout << "Enter dividend: ";
    cin >> num1;
    cout << "Enter divisor: ";
    cin >> num2;

    int result = divide(num1, num2);
    if (result == -1) {
        cout << "Error: Division by zero" << endl;
    }
    else {
        cout << "Result of division: " << result << endl;
    }

    return 0;
}
