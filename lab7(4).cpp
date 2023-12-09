#include <iostream>

int main() {
    int count;
    std::cout << "Enter the count of numbers: ";
    std::cin >> count;

    int number;
    int sum = 0;
    long long product = 1; // Використовуємо long long для уникнення переповнення

    for (int i = 0; i < count; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> number;

        sum += number;
        product *= number;

        char choice;
        std::cout << "Do you want to stop? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            break;
        }
    }

    std::cout << "Sum of the numbers: " << sum << std::endl;
    std::cout << "Product of the numbers: " << product << std::endl;

    return 0;
}
