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

    // Конструктор з параметрами
    Student(int studentAge, std::string studentGender, double studentScholarship) {
        age = studentAge;
        gender = studentGender;
        scholarship = studentScholarship;
    }

    // Конструктор копіювання
    Student(const Student& otherStudent) {
        age = otherStudent.age;
        gender = otherStudent.gender;
        scholarship = otherStudent.scholarship;
    }

    // Деструктор
    ~Student() {
        std::cout << "Student terminated by Epsilon-11" << std::endl;
    }

    // Методи доступу до поля age
    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    // Методи доступу до поля gender
    std::string getGender() const {
        return gender;
    }

    void setGender(const std::string& newGender) {
        gender = newGender;
    }

    // Методи доступу до поля scholarship
    double getScholarship() const {
        return scholarship;
    }

    void setScholarship(double newScholarship) {
        scholarship = newScholarship;
    }

    // Метод для введення даних студента з клавіатури
    void inputStudentData() {
        std::cout << "Enter student's age: ";
        std::cin >> age;

        std::cout << "Enter student's gender: ";
        std::cin >> gender;

        std::cout << "Enter student's scholarship: ";
        std::cin >> scholarship;
    }

    // Метод для виведення даних студента на екран
    void displayStudentData() const {
        std::cout << "\nStudent's Information:" << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Scholarship: " << scholarship << std::endl;
    }
};

int main() {
    Student defaultStudent;
    defaultStudent.inputStudentData();
    defaultStudent.displayStudentData();

    // Використання методів доступу (гетерів та сетерів)
    int newAge;
    std::cout << "Enter new age: ";
    std::cin >> newAge;
    defaultStudent.setAge(newAge);

    std::string newGender;
    std::cout << "Enter new gender: ";
    std::cin >> newGender;
    defaultStudent.setGender(newGender);

    double newScholarship;
    std::cout << "Enter new scholarship: ";
    std::cin >> newScholarship;
    defaultStudent.setScholarship(newScholarship);

    defaultStudent.displayStudentData();

    return 0;
}