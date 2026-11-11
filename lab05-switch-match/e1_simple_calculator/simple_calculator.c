/* Calculator simplu cu switch */
#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Expresie (ex. 12 / 4): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
    case '+':
        printf("= %.2f\n", a + b);
        break;
    case '-':
        printf("= %.2f\n", a - b);
        break;
    case '*':
        printf("= %.2f\n", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("Eroare: impartire la 0\n");
        } else {
            printf("= %.2f\n", a / b);
        }
        break;
    default:
        printf("Operator necunoscut: %c\n", op);
    }
    return 0;
}
