/* Descompunerea programului in functii */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);              /* prototip */

int main(void) {
    int low, high, count = 0;

    printf("Intervalul [a, b]: ");
    scanf("%d %d", &low, &high);

    printf("Numere prime:");
    for (int k = low; k <= high; k++) {
        if (is_prime(k)) {         /* apel */
            printf(" %d", k);
            count++;
        }
    }
    printf("\nTotal: %d\n", count);
    return 0;
}

/* Intoarce true daca n este prim */
bool is_prime(int n) {             /* definitie */
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
