#include <iostream>

int main() {
    int lowerLimit = 10; // Нижня межа діапазону
    int upperLimit = 20; // Верхня межа діапазону

    int number;

    do {
        std::cout << "Enter a number between " << lowerLimit << " and " << upperLimit << ": ";
        std::cin >> number;

        if (number < lowerLimit || number > upperLimit) {
            std::cout << "Number is outside the specified range. Please try again." << std::endl;
        }

    } while (number < lowerLimit || number > upperLimit);

    std::cout << "You entered: " << number << std::endl;

    return 0;
}
