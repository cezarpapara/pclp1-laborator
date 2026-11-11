// Pointeri si referinte in C++
#include <iostream>

int main() {
    int x = 10;
    int *p = &x;          // pointer: adresa lui x
    int &r = x;           // referinta: alt nume

    std::cout << "x = " << x << ", adresa lui x = "
              << &x << '\n';
    std::cout << "p = " << p << ", *p = " << *p
              << '\n';
    *p = 25;
    std::cout << "dupa *p = 25: x = " << x << '\n';
    r = 40;
    std::cout << "dupa r = 40: x = " << x << '\n';

    int v[] = {4, 8, 15, 16, 23};
    int sum = 0;
    for (int *q = v; q != v + 5; q++) {
        sum += *q;
    }
    std::cout << "suma prin pointer: " << sum
              << '\n';
    return 0;
}
