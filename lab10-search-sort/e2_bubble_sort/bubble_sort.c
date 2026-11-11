/* Bubble sort si qsort din biblioteca */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare_ints(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}

void bubble_sort(int values[], int n) {
    bool swapped = true;
    for (int pass = 0; swapped; pass++) {
        swapped = false;
        for (int i = 0; i < n - 1 - pass; i++) {
            if (values[i] > values[i + 1]) {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swapped = true;
            }
        }
    }
}

void print_array(const int values[], int n) {
    printf("%d", values[0]);
    for (int i = 1; i < n; i++) {
        printf(" %d", values[i]);
    }
    printf("\n");
}

int main(void) {
    int a[] = {29, 3, 17, 8, 42, 1, 15};
    int b[] = {29, 3, 17, 8, 42, 1, 15};
    int n = sizeof a / sizeof a[0];

    bubble_sort(a, n);
    qsort(b, n, sizeof b[0], compare_ints);
    print_array(a, n);
    print_array(b, n);
    return 0;
}
