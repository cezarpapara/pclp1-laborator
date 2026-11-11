/* Secunde -> ore:minute:secunde */
#include <stdio.h>

const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 3600;

int main(void) {
    int total;

    printf("Numar de secunde: ");
    scanf("%d", &total);

    int hours = total / SECONDS_PER_HOUR;
    int rest = total % SECONDS_PER_HOUR;
    int minutes = rest / SECONDS_PER_MINUTE;
    int seconds = rest % SECONDS_PER_MINUTE;

    printf("%d s = %02d:%02d:%02d\n",
           total, hours, minutes, seconds);
    return 0;
}
