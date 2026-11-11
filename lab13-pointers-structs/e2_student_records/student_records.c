/* struct: gruparea datelor unui student */
#include <stdio.h>

#define MAX_STUDENTS 50
#define NAME_LEN 32

struct Student {
    char name[NAME_LEN];
    double grade;
};

int main(void) {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Numarul de studenti: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nume si nota: ");
        scanf("%31s %lf", students[i].name,
              &students[i].grade);
    }

    int best = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
        if (students[i].grade
            > students[best].grade) {
            best = i;
        }
    }
    printf("Media grupei: %.2f\n", sum / n);
    printf("Cel mai bun: %s (%.2f)\n",
           students[best].name,
           students[best].grade);
    return 0;
}
