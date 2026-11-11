/* Conversia temperaturii din grade Celsius */
#include <stdio.h>

const double KELVIN_OFFSET = 273.15;

int main(void) {
    double celsius;

    printf("Grade Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin = celsius + KELVIN_OFFSET;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);
    return 0;
}
