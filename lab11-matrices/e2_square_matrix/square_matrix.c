/* Matrice patratica: diagonale, transpusa */
#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], n;

    printf("n = ");
    scanf("%d", &n);
    printf("Elementele, pe linii:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int main_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++) {
        main_sum += a[i][i];
        secondary_sum += a[i][n - 1 - i];
    }
    printf("Diagonala principala: %d\n", main_sum);
    printf("Diagonala secundara: %d\n",
           secondary_sum);

    printf("Transpusa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[j][i]);  /* inversat */
        }
        printf("\n");
    }
    return 0;
}
