/* Vector de frecventa: indicele este chiar nota */
#include <stdio.h>

int main(void) {
    int frequency[11] = {0};   /* note 1..10 */
    int n, grade;

    printf("Numarul de note: ");
    scanf("%d", &n);
    printf("Notele: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &grade);
        frequency[grade]++;    /* acces direct */
    }

    for (int g = 1; g <= 10; g++) {
        if (frequency[g] > 0) {
            printf("Nota %d: %d\n", g,
                   frequency[g]);
        }
    }
    return 0;
}
