#include <iostream>
#include <cctype> // для функції tolower

using namespace std;

bool checkInput(char input) {
    // Перевіряємо, чи введений символ 'Y', 'y', 'д', 'Д'
    if (input == 'Y' || input == 'y' || input == 'д' || input == 'Д') {
        return true; // Повертаємо true, якщо введено один із цих символів
    }
    else {
        return false; // Повертаємо false для будь-яких інших символів
    }
}

int main() {
    char userInput;
    cout << "Введіть символ ('Y', 'y', 'д', 'Д'): ";
    cin >> userInput;

    // Перевіряємо введений символ за допомогою функції checkInput
    bool isAccepted = checkInput(userInput);

    if (isAccepted) {
        cout << "Ви ввели 'Y', 'y', 'д', 'Д'" << endl;
    }
    else {
        cout << "Ви ввели інший символ" << endl;
    }

    return 0;
}
