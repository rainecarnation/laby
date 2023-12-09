#include <iostream>

int main() {
    int power;
    std::cout << "Enter the power of the bulb in watts: ";
    std::cin >> power;

    int lifespan;

    if (power == 25) {
        lifespan = 2500;
    }
    else if (power == 40 || power == 60) {
        lifespan = 1000;
    }
    else if (power == 75 || power == 100) {
        lifespan = 750;
    }
    else if (power == 150 || power == 200) {
        lifespan = 500;
    }
    else {
        std::cout << "Invalid power rating entered";
        return 1; // Повертаємо 1, щоб позначити помилку
    }

    std::cout << "The lifespan of the bulb with " << power << " watts is: " << lifespan << " hours";

    return 0;
}
