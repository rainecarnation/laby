#include <iostream>

int main() {
    // Цикл for
    std::cout << "Using for loop:" << std::endl;
    for (int i = 100; i <= 200; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Цикл while
    std::cout << "Using while loop:" << std::endl;
    int j = 100;
    while (j <= 200) {
        std::cout << j << " ";
        j += 2;
    }
    std::cout << std::endl;

    // Цикл do...while
    std::cout << "Using do...while loop:" << std::endl;
    int k = 100;
    do {
        std::cout << k << " ";
        k += 2;
    } while (k <= 200);
    std::cout << std::endl;

    return 0;
}
