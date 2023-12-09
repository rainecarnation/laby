#include <iostream>
#include <cstdlib> // Для функції rand()
#include <ctime> // Для функції time()

using namespace std;

int main() {
    // Встановлюємо початкове значення для генератора випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Генеруємо три випадкових числа
    int number1 = rand();
    int number2 = rand();
    int number3 = rand();

    // Виводимо згенеровані числа
    cout << "Generated numbers: " << number1 << ", " << number2 << ", " << number3 << endl;

    // Знаходимо найбільше число серед трьох випадкових чисел
    int maxNumber = number1;
    if (number2 > maxNumber) {
        maxNumber = number2;
    }
    if (number3 > maxNumber) {
        maxNumber = number3;
    }

    // Виводимо найбільше число
    cout << "The largest number is: " << maxNumber << endl;

    return 0;
}
