/* Factorial si Fibonacci recursiv */
#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;               /* cazul de baza */
    }
    return n * factorial(n - 1);   /* autoapel */
}

long long fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n;

    printf("n = ");
    scanf("%d", &n);
    printf("%d! = %lld\n", n, factorial(n));
    printf("F(%d) = %lld\n", n, fibonacci(n));
    return 0;
}
