/* Suma 1 + 2 + ... + n: do-while, for, while */
#include <stdio.h>

int main(void) {
    int n;

    do {                      /* test final */
        printf("n (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    long long sum_for = 0;
    for (int i = 1; i <= n; i++) {
        sum_for += i;
    }

    long long sum_while = 0;
    int k = 1;
    while (k <= n) {          /* test initial */
        sum_while += k;
        k++;
    }

    long long gauss = (long long)n * (n + 1) / 2;
    printf("for: %lld\n", sum_for);
    printf("while: %lld\n", sum_while);
    printf("Gauss: %lld\n", gauss);
    return 0;
}
