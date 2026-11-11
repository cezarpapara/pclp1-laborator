/* Cautare binara intr-un tablou sortat */
#include <stdio.h>

#define MAX_SIZE 1000

int main(void) {
    int values[MAX_SIZE], n, target;

    printf("n = ");
    scanf("%d", &n);
    printf("Elemente sortate: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    printf("Valoarea cautata: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;
    int position = -1, steps = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        steps++;
        if (values[mid] == target) {
            position = mid;
            break;
        } else if (values[mid] < target) {
            low = mid + 1;     /* dreapta */
        } else {
            high = mid - 1;    /* stanga */
        }
    }
    printf("Pozitia: %d, pasi: %d\n",
           position, steps);
    return 0;
}
