// Tipuri de date: dimensiuni si limite
#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    char letter = 'A';
    unsigned int counter =
        std::numeric_limits<unsigned int>::max();

    std::cout << "char: " << sizeof(char)
              << " octet\n";
    std::cout << "int: " << sizeof(int)
              << " octeti\n";
    std::cout << "double: " << sizeof(double)
              << " octeti\n";
    std::cout << "'" << letter << "' are codul "
              << static_cast<int>(letter) << '\n';
    std::cout << "INT_MAX = "
              << std::numeric_limits<int>::max()
              << '\n';
    std::cout << "UINT_MAX + 1 = " << counter + 1
              << '\n';
    std::cout << std::fixed << std::setprecision(17)
              << "0.1 + 0.2 = " << 0.1 + 0.2
              << '\n';
    return 0;
}
