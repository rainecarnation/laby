#include <iostream>
#include <string>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор за замовчуванням
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Конструктор з параметрами
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Деструктор
    ~Date() {
        std::cout << "Destructor initialized" << std::endl;
    }

    // Методи доступу до полів
    int getDay() const {
        return day;
    }

    void setDay(int d) {
        day = d;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int m) {
        month = m;
    }

    int getYear() const {
        return year;
    }

    void setYear(int y) {
        year = y;
    }

    // Логічні методи для перевірки дати
    bool isLeapYear() const {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    bool isValidDate() const {
        if (year < 1)
            return false;

        if (month < 1 || month > 12)
            return false;

        if (day < 1)
            return false;

        int daysInMonth = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11)
            daysInMonth = 30;
        else if (month == 2) {
            if (isLeapYear())
                daysInMonth = 29;
            else
                daysInMonth = 28;
        }

        return (day <= daysInMonth);
    }

    // Метод для роздруківки дати у різних форматах
    void printDate() const {
        std::cout << day << "." << month << "." << year << std::endl;
        std::cout << day << "/" << month << "/" << year << std::endl;

        std::string monthStr;
        switch (month) {
        case 1:
            monthStr = "Jan";
            break;
        case 2:
            monthStr = "Feb";
            break;
        case 3:
            monthStr = "Mar";
            break;
        case 4:
            monthStr = "Apr";
            break;
        case 5:
            monthStr = "May";
            break;
        case 6:
            monthStr = "Jun";
            break;
        case 7:
            monthStr = "Jul";
            break;
        case 8:
            monthStr = "Aug";
            break;
        case 9:
            monthStr = "Sep";
            break;
        case 10:
            monthStr = "Oct";
            break;
        case 11:
            monthStr = "Nov";
            break;
        case 12:
            monthStr = "Dec";
            break;
        default:
            monthStr = "Invalid";
            break;
        }

        std::cout << monthStr << "-" << day << "-" << year << std::endl;
    }
};

int main() {
    Date today(8, 12, 2023);

    std::cout << "Today's date in different formats:" << std::endl;
    today.printDate();

    std::cout << "Is today a valid date? " << (today.isValidDate() ? "Yes" : "No") << std::endl;
    std::cout << "Is this a leap year? " << (today.isLeapYear() ? "Yes" : "No") << std::endl;

    return 0;
}
