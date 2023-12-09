#include <iostream>

using namespace std;

char tolowerR(char ch) {
    if (ch >= 'А' && ch <= 'Я') {
        return ch + ('а' - 'А');
    }
    return ch;
}

char toupperR(char ch) {
    if (ch >= 'а' && ch <= 'я') {
        return ch - ('а' - 'А');
    }
    return ch;
}

bool isalphaR(char ch) {
    return ((ch >= 'А' && ch <= 'Я') || (ch >= 'а' && ch <= 'я'));
}

bool islowerR(char ch) {
    return (ch >= 'а' && ch <= 'я');
}

bool isupperR(char ch) {
    return (ch >= 'А' && ch <= 'Я');
}

bool isalnumR(char ch) {
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

int main() {
    char testChar = 'Щ'; // Тут можна змінити символ для тестування

    cout << "Testing Russian character functions for: " << testChar << endl;
    cout << "tolowerR: " << tolowerR(testChar) << endl;
    cout << "toupperR: " << toupperR(testChar) << endl;
    cout << "isalphaR: " << isalphaR(testChar) << endl;
    cout << "islowerR: " << islowerR(testChar) << endl;
    cout << "isupperR: " << isupperR(testChar) << endl;
    cout << "isalnumR: " << isalnumR(testChar) << endl;

    return 0;
}
