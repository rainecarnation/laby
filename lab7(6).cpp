#include <iostream>

int main() {
    int day = 3; // Приклад: 3 - це середа

    switch (day) {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
        // Додайте кейси для інших днів тижня...
    default:
        std::cout << "Invalid day";
    }

    return 0;
}
#include <iostream>

int main() {
    char day = 'W'; // Приклад: 'W' - це середа

    switch (day) {
    case 'M':
        std::cout << "Monday";
        break;
    case 'T':
        std::cout << "Tuesday";
        break;
    case 'W':
        std::cout << "Wednesday";
        break;
        // Додайте кейси для інших днів тижня...
    default:
        std::cout << "Invalid day";
    }

    return 0;
}
#include <iostream>

enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    Days day = Wednesday; // Приклад: Wednesday

    switch (day) {
    case Monday:
        std::cout << "Monday";
        break;
    case Tuesday:
        std::cout << "Tuesday";
        break;
    case Wednesday:
        std::cout << "Wednesday";
        break;
        // Додайте кейси для інших днів тижня...
    default:
        std::cout << "Invalid day";
    }

    return 0;
}
