/* Transmiterea prin valoare si prin adresa */
#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;      /* lucreaza pe copii */
    a = b;
    b = temp;
}

void swap_by_address(int *a, int *b) {
    int temp = *a;     /* lucreaza pe originale */
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 3, y = 7;

    swap_by_value(x, y);
    printf("prin valoare: x=%d y=%d\n", x, y);
    swap_by_address(&x, &y);
    printf("prin adresa: x=%d y=%d\n", x, y);
    return 0;
}
