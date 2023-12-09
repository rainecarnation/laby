#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

double calculateThirdSide(double a, double b, double angleC) {
    double angleInRadians = angleC * M_PI / 180.0; // Переведення градусів в радіани
    double thirdSide = sqrt(a * a + b * b - 2 * a * b * cos(angleInRadians));
    return thirdSide;
}

int main() {
    double sideA, sideB, angleC;
    cout << "Enter lengths of side a and side b: ";
    cin >> sideA >> sideB;
    cout << "Enter the angle between them in degrees: ";
    cin >> angleC;

    double result = calculateThirdSide(sideA, sideB, angleC);
    cout << "The length of the third side (side c) is: " << result << endl;

    return 0;
}
