// Impartirea intreaga si restul in C++
#include <iostream>
#include <iomanip>

int main() {
    int a, b;

    std::cout << "a b: ";
    std::cin >> a >> b;

    std::cout << a << " / " << b << " = "
              << a / b << '\n';
    std::cout << a << " % " << b << " = "
              << a % b << '\n';
    std::cout << std::fixed << std::setprecision(2)
              << "(double)" << a << " / " << b
              << " = " << static_cast<double>(a) / b
              << '\n';
    return 0;
}
