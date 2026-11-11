// Ecuatia a*x^2 + b*x + c = 0
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "a b c: ";
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(2);

    if (a == 0) {             // gradul 1
        if (b != 0) {
            std::cout << "x = " << -c / b << '\n';
        } else if (c == 0) {
            std::cout << "Orice x este solutie\n";
        } else {
            std::cout << "Nu exista solutii\n";
        }
    } else {                  // gradul 2
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            std::cout << "Nu are solutii reale\n";
        } else if (delta == 0) {
            double x = -b / (2 * a);
            std::cout << "x1 = x2 = " << x << '\n';
        } else {
            double root = std::sqrt(delta);
            double x1 = (-b - root) / (2 * a);
            double x2 = (-b + root) / (2 * a);
            std::cout << "x1 = " << x1 << '\n'
                      << "x2 = " << x2 << '\n';
        }
    }
    return 0;
}
