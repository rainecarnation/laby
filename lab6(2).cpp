#include <iostream>
#include <string>

class Student {
private:
    int age;
    std::string gender;
    double scholarship;

public:
    // Конструктор за замовчуванням
    Student() {
        age = 0;
        gender = "Undefined";
        scholarship = 0.0;
    }

    // Деструктор
    ~Student() {
        std::cout << "Student terminated by Epsilon-11" << std::endl;
    }

    // Методи доступу до полів

    // Методи встановлення значення віку, статі та стипендії
    void setAge(int studentAge) {
        age = studentAge;
    }

    void setGender(const std::string& studentGender) {
        gender = studentGender;
    }

    void setScholarship(double studentScholarship) {
        scholarship = studentScholarship;
    }

    // Методи отримання значень віку, статі та стипендії
    int getAge() const {
        return age;
    }

    std::string getGender() const {
        return gender;
    }

    double getScholarship() const {
        return scholarship;
    }
};

int main() {
    // Створення двох об'єктів типу "Студент"
    Student student1;
    Student student2;

    // Введення даних для першого студента через методи доступу
    int age1;
    std::string gender1;
    double scholarship1;

    std::cout << "Enter age for student 1: ";
    std::cin >> age1;
    student1.setAge(age1);

    std::cout << "Enter gender for student 1: ";
    std::cin >> gender1;
    student1.setGender(gender1);

    std::cout << "Enter scholarship for student 1: ";
    std::cin >> scholarship1;
    student1.setScholarship(scholarship1);

    // Введення даних для другого студента через методи доступу
    int age2;
    std::string gender2;
    double scholarship2;

    std::cout << "Enter age for student 2: ";
    std::cin >> age2;
    student2.setAge(age2);

    std::cout << "Enter gender for student 2: ";
    std::cin >> gender2;
    student2.setGender(gender2);

    std::cout << "Enter scholarship for student 2: ";
    std::cin >> scholarship2;
    student2.setScholarship(scholarship2);

    // Виведення окремих членів-даних об'єктів на екран через методи доступу
    std::cout << "Student 1's Information:" << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "Scholarship: " << student1.getScholarship() << std::endl;

    std::cout << "\nStudent 2's Information:" << std::endl;
    std::cout << "Age: " << student2.getAge() << std::endl;
    std::cout << "Gender: " << student2.getGender() << std::endl;
    std::cout << "Scholarship: " << student2.getScholarship() << std::endl;

    // Розрахунок середнього віку та сумарної стипендії цих двох студентів
    double averageAge = (student1.getAge() + student2.getAge()) / 2.0;
    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    std::cout << "\nAverage Age of Students: " << averageAge << std::endl;
    std::cout << "Total Scholarship of Students: " << totalScholarship << std::endl;

    return 0;
}
