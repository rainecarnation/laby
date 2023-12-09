#include <iostream>

unsigned long Perimeter(int side1, int side2) {
    unsigned long perimeter = 2 * (static_cast<unsigned long>(side1) + side2);
    return perimeter;
}

int main() {
    // Тут можна викликати функцію Perimeter() та використовувати результат
    return 0;
}
