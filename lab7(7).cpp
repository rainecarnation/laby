#include <iostream>

int main() {
    double magnitude;
    std::cout << "Enter the Richter scale magnitude: ";
    std::cin >> magnitude;

    if (magnitude < 5) {
        std::cout << "Light, no damage";
    }
    else if (magnitude >= 5 && magnitude < 5.5) {
        std::cout << "Moderate, slight damage";
    }
    else if (magnitude >= 5.5 && magnitude < 6.5) {
        std::cout << "Strong, damage and walls affected";
    }
    else if (magnitude >= 6.5 && magnitude < 7.5) {
        std::cout << "Severe, many buildings damaged";
    }
    else {
        std::cout << "Catastrophic, most buildings destroyed";
    }

    return 0;
}
