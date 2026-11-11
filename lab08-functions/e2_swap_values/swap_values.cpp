// Transmiterea prin valoare si prin referinta
#include <iostream>

void swap_by_value(int a, int b) {
    int temp = a;      // lucreaza pe copii
    a = b;
    b = temp;
}

void swap_by_reference(int &a, int &b) {
    int temp = a;      // a, b sunt alias-uri
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 7;

    swap_by_value(x, y);
    std::cout << "prin valoare: x=" << x
              << " y=" << y << '\n';
    swap_by_reference(x, y);   // sau std::swap
    std::cout << "prin referinta: x=" << x
              << " y=" << y << '\n';
    return 0;
}
