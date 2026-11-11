/* Tipuri de date: dimensiuni si limite */
#include <stdio.h>
#include <limits.h>

int main(void) {
    char letter = 'A';
    unsigned int counter = UINT_MAX;

    printf("char: %zu octet\n", sizeof(char));
    printf("int: %zu octeti\n", sizeof(int));
    printf("double: %zu octeti\n", sizeof(double));
    printf("'%c' are codul %d\n", letter, letter);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("UINT_MAX + 1 = %u\n", counter + 1);
    printf("0.1 + 0.2 = %.17f\n", 0.1 + 0.2);
    return 0;
}
