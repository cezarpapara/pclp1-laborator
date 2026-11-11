// Factorial si Fibonacci recursiv
#include <iostream>

long long factorial(int n) {
    if (n <= 1) {
        return 1;               // cazul de baza
    }
    return n * factorial(n - 1);   // autoapel
}

long long fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    std::cout << "n = ";
    std::cin >> n;
    std::cout << n << "! = " << factorial(n) << '\n'
              << "F(" << n << ") = " << fibonacci(n)
              << '\n';
    return 0;
}
