#include <iostream>
#include <string>

class Cat {
private:
    std::string name;
    int age;

public:
    // Конструктор для класу Cat
    Cat(std::string catName, int catAge) : name(catName), age(catAge) {}

    // Функція для виведення даних про кота
    void printCat() {
        std::cout << "Cat's name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    int numCats;
    std::cout << "Enter the number of cats: ";
    std::cin >> numCats;

    // Введення параметрів кількох об'єктів класу Cat
    for (int i = 0; i < numCats; ++i) {
        std::string catName;
        int catAge;

        std::cout << "Enter name for cat " << i + 1 << ": ";
        std::cin >> catName;

        std::cout << "Enter age for cat " << i + 1 << ": ";
        std::cin >> catAge;

        Cat cat(catName, catAge);
        cat.printCat();
    }

    return 0;
}
