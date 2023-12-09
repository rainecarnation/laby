#include <iostream>
#include <string>

using namespace std;

int main() {
    string city = "";
    string district = "";
    string street = "";
    string house = "";
    string apartment = "";

    city = "Kherson";
    district = "Central";
    street = "Suvorova";
    house = "10";
    apartment = "35";

    string fullAddress = city + ", " + district + ", " + street + ", " + house + ", " + apartment;

    cout << "City: " << city << ", Length: " << city.length() << endl;
    cout << "District: " << district << ", Length: " << district.length() << endl;
    cout << "Full Address: " << fullAddress << ", Length: " << fullAddress.length() << endl;

    if (city.length() > district.length()) {
        cout << "City name is longer than district name." << endl;
    }
    else if (city.length() < district.length()) {
        cout << "District name is longer than city name." << endl;
    }
    else {
        cout << "City name and district name have the same length." << endl;
    }

    return 0;
}
