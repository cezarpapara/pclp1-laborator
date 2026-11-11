// Suma 1 + 2 + ... + n: do-while, for, while
#include <iostream>

int main() {
    int n;

    do {                      // test final
        std::cout << "n (n > 0): ";
        std::cin >> n;
    } while (n <= 0);

    long long sum_for = 0;
    for (int i = 1; i <= n; i++) {
        sum_for += i;
    }

    long long sum_while = 0;
    int k = 1;
    while (k <= n) {          // test initial
        sum_while += k;
        k++;
    }

    long long gauss = static_cast<long long>(n)
                      * (n + 1) / 2;
    std::cout << "for: " << sum_for << '\n'
              << "while: " << sum_while << '\n'
              << "Gauss: " << gauss << '\n';
    return 0;
}
