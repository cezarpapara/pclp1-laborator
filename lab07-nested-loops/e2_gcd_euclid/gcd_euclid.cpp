// cmmdc si cmmmc prin algoritmul lui Euclid
#include <iostream>

int main() {
    int a, b;

    std::cout << "a b (numere pozitive): ";
    std::cin >> a >> b;

    int x = a, y = b;
    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    int gcd = x;
    long long lcm = static_cast<long long>(a)
                    / gcd * b;

    std::cout << "cmmdc(" << a << ", " << b
              << ") = " << gcd << '\n'
              << "cmmmc(" << a << ", " << b
              << ") = " << lcm << '\n';
    return 0;
}
