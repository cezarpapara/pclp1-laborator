/* Numar prim: cautam un divizor pana la radical */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;

    printf("n = ");
    scanf("%d", &n);

    bool is_prime = n >= 2;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            is_prime = false;
            break;          /* oprim cautarea */
        }
    }

    if (is_prime) {
        printf("%d este prim\n", n);
    } else {
        printf("%d nu este prim\n", n);
    }
    return 0;
}
