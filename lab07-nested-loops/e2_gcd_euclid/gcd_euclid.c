/* cmmdc si cmmmc prin algoritmul lui Euclid */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("a b (numere pozitive): ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    int gcd = x;
    long long lcm = (long long)a / gcd * b;

    printf("cmmdc(%d, %d) = %d\n", a, b, gcd);
    printf("cmmmc(%d, %d) = %lld\n", a, b, lcm);
    return 0;
}
