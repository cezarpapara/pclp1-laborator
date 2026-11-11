/* Tablou unidimensional: statistici pe note */
#include <stdio.h>

#define MAX_GRADES 100

int main(void) {
    int grades[MAX_GRADES];
    int n;

    printf("Numarul de note: ");
    scanf("%d", &n);
    printf("Notele: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    int min = grades[0], max = grades[0], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
        if (grades[i] < min) {
            min = grades[i];
        }
        if (grades[i] > max) {
            max = grades[i];
        }
    }
    double average = (double)sum / n;

    int above = 0;
    for (int i = 0; i < n; i++) {
        if (grades[i] > average) {
            above++;
        }
    }
    printf("Minim: %d, maxim: %d\n", min, max);
    printf("Media: %.2f\n", average);
    printf("Peste medie: %d\n", above);
    return 0;
}
