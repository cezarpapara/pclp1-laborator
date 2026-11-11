/* Matrice: sume pe linii si pe coloane */
#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], rows, cols;

    printf("Linii si coloane: ");
    scanf("%d %d", &rows, &cols);
    printf("Elementele, pe linii:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            printf("%4d", a[i][j]);
            row_sum += a[i][j];
        }
        printf(" | %d\n", row_sum);
    }
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += a[i][j];
        }
        printf("%4d", col_sum);
    }
    printf("\n");
    return 0;
}
