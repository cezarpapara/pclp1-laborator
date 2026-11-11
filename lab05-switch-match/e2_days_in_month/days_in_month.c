/* Cazuri grupate in switch */
#include <stdio.h>

int main(void) {
    int month, year, days;

    printf("Luna si anul: ");
    scanf("%d %d", &month, &year);
    int leap = (year % 4 == 0 && year % 100 != 0)
               || year % 400 == 0;

    switch (month) {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        days = leap ? 29 : 28;
        break;
    default:
        days = 0;
    }

    if (days == 0) {
        printf("Luna invalida\n");
    } else {
        printf("Are %d de zile\n", days);
    }
    return 0;
}
