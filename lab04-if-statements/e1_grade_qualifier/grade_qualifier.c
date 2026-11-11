/* Calificativul corespunzator unei note */
#include <stdio.h>

int main(void) {
    int grade;

    printf("Nota (1-10): ");
    scanf("%d", &grade);

    if (grade < 1 || grade > 10) {
        printf("Nota invalida\n");
    } else if (grade < 5) {
        printf("Insuficient\n");
    } else if (grade <= 6) {
        printf("Suficient\n");
    } else if (grade <= 8) {
        printf("Bine\n");
    } else {
        printf("Foarte bine\n");
    }
    return 0;
}
