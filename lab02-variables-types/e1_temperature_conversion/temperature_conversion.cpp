// Conversia temperaturii din grade Celsius
#include <iostream>
#include <iomanip>

const double KELVIN_OFFSET = 273.15;

int main() {
    double celsius;

    std::cout << "Grade Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin = celsius + KELVIN_OFFSET;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit: " << fahrenheit
              << "\nKelvin: " << kelvin << '\n';
    return 0;
}
