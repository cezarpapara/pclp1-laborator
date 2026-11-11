/* Ecuatia a*x^2 + b*x + c = 0 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    printf("a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {             /* gradul 1 */
        if (b != 0) {
            printf("x = %.2f\n", -c / b);
        } else if (c == 0) {
            printf("Orice x este solutie\n");
        } else {
            printf("Nu exista solutii\n");
        }
    } else {                  /* gradul 2 */
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Nu are solutii reale\n");
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("x1 = x2 = %.2f\n", x);
        } else {
            double root = sqrt(delta);
            double x1 = (-b - root) / (2 * a);
            double x2 = (-b + root) / (2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
    return 0;
}
