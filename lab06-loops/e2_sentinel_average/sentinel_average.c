/* Citire pana la valoarea santinela 0 */
#include <stdio.h>

int main(void) {
    int value, count = 0, sum = 0, max = 0;

    printf("Numar (0 = stop): ");
    scanf("%d", &value);
    while (value != 0) {
        if (count == 0 || value > max) {
            max = value;
        }
        sum += value;
        count++;
        printf("Numar (0 = stop): ");
        scanf("%d", &value);
    }

    if (count == 0) {
        printf("Nu s-a citit niciun numar\n");
    } else {
        double average = (double)sum / count;
        printf("Numere: %d\n", count);
        printf("Media: %.2f\n", average);
        printf("Maximul: %d\n", max);
    }
    return 0;
}
