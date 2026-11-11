/* Aplicatie: clasamentul unei grupe */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 32
#define GRADE_COUNT 3
#define PASS_MARK 5.0

struct Student {
    char name[NAME_LEN];
    double average;
};

/* Intoarce numarul de studenti sau -1 */
int read_students(const char *path,
                  struct Student students[]) {
    FILE *file = fopen(path, "r");
    if (file == NULL) {
        return -1;
    }
    int n = 0;
    while (n < MAX_STUDENTS &&
           fscanf(file, "%31s", students[n].name)
               == 1) {
        double sum = 0, grade;
        for (int k = 0; k < GRADE_COUNT; k++) {
            fscanf(file, "%lf", &grade);
            sum += grade;
        }
        students[n].average = sum / GRADE_COUNT;
        n++;
    }
    fclose(file);
    return n;
}

/* Media descrescator, apoi numele crescator */
int by_average(const void *a, const void *b) {
    const struct Student *x = a, *y = b;
    if (x->average != y->average) {
        return x->average < y->average ? 1 : -1;
    }
    return strcmp(x->name, y->name);
}

/* Intoarce numarul de promovati sau -1 */
int write_ranking(const char *path,
                  const struct Student students[],
                  int n) {
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        return -1;
    }
    int passed = 0;
    for (int i = 0; i < n; i++) {
        double avg = students[i].average;
        int ok = avg >= PASS_MARK;
        passed += ok;
        fprintf(file, "%d. %s %.2f %s\n", i + 1,
                students[i].name, avg,
                ok ? "promovat" : "nepromovat");
    }
    fclose(file);
    return passed;
}

int main(void) {
    struct Student students[MAX_STUDENTS];

    int n = read_students("students.txt",
                          students);
    if (n < 0) {
        printf("Nu pot citi students.txt\n");
        return 1;
    }
    qsort(students, n, sizeof students[0],
          by_average);
    int passed = write_ranking("ranking.txt",
                               students, n);
    if (passed < 0) {
        printf("Nu pot scrie ranking.txt\n");
        return 1;
    }
    printf("Studenti: %d, promovati: %d\n",
           n, passed);
    printf("Clasament scris in ranking.txt\n");
    return 0;
}
