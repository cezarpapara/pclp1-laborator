/* Impartirea intreaga si restul in C */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("a b: ");
    scanf("%d %d", &a, &b);

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("(double)%d / %d = %.2f\n",
           a, b, (double)a / b);
    return 0;
}
