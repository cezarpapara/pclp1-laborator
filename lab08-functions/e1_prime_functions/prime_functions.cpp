// Descompunerea programului in functii
#include <iostream>

bool is_prime(int n);              // prototip

int main() {
    int low, high, count = 0;

    std::cout << "Intervalul [a, b]: ";
    std::cin >> low >> high;

    std::cout << "Numere prime:";
    for (int k = low; k <= high; k++) {
        if (is_prime(k)) {         // apel
            std::cout << ' ' << k;
            count++;
        }
    }
    std::cout << "\nTotal: " << count << '\n';
    return 0;
}

// Intoarce true daca n este prim
bool is_prime(int n) {             // definitie
    if (n < 2) {
        return false;
    }
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}
