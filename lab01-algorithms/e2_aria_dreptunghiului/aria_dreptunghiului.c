/* Aria unui dreptunghi
   (denumiri in limba romana) */
#include <stdio.h>

int main(void) {
    double lungime, latime, aria;

    printf("Lungimea: ");
    scanf("%lf", &lungime);
    printf("Latimea: ");
    scanf("%lf", &latime);

    aria = lungime * latime;
    printf("Aria este %.2f\n", aria);
    return 0;
}
