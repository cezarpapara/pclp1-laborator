// Numar prim: cautam un divizor pana la radical
#include <iostream>

int main() {
    int n;

    std::cout << "n = ";
    std::cin >> n;

    bool is_prime = n >= 2;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            is_prime = false;
            break;          // oprim cautarea
        }
    }

    if (is_prime) {
        std::cout << n << " este prim\n";
    } else {
        std::cout << n << " nu este prim\n";
    }
    return 0;
}
