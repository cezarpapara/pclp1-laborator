/* Citire din fisier, scriere in fisier */
#include <stdio.h>

int main(void) {
    FILE *input = fopen("numbers.txt", "r");
    if (input == NULL) {
        printf("Nu pot citi numbers.txt\n");
        return 1;
    }

    int value, count = 0, min = 0, max = 0;
    long long sum = 0;
    while (fscanf(input, "%d", &value) == 1) {
        if (count == 0 || value < min) {
            min = value;
        }
        if (count == 0 || value > max) {
            max = value;
        }
        sum += value;
        count++;
    }
    fclose(input);
    if (count == 0) {
        printf("Fisierul nu contine numere\n");
        return 1;
    }

    FILE *output = fopen("report.txt", "w");
    if (output == NULL) {
        printf("Nu pot crea report.txt\n");
        return 1;
    }
    fprintf(output, "Numere: %d\n", count);
    fprintf(output, "Suma: %lld\n", sum);
    fprintf(output, "Minim: %d\n", min);
    fprintf(output, "Maxim: %d\n", max);
    fprintf(output, "Media: %.2f\n",
            (double)sum / count);
    fclose(output);

    printf("Raport scris in report.txt\n");
    return 0;
}
