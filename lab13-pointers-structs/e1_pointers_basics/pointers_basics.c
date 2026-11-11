/* Adrese, pointeri, aritmetica pointerilor */
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;          /* p = adresa lui x */

    printf("x = %d, adresa lui x = %p\n",
           x, (void *)&x);
    printf("p = %p, *p = %d\n", (void *)p, *p);
    *p = 25;              /* modificam x prin p */
    printf("dupa *p = 25: x = %d\n", x);

    int v[] = {4, 8, 15, 16, 23};
    int *q = v;           /* q = &v[0] */
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(q + i);  /* echivalent: q[i] */
    }
    printf("suma prin pointer: %d\n", sum);
    return 0;
}
