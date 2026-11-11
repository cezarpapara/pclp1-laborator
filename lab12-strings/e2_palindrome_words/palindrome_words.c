/* Numararea cuvintelor; test de palindrom */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 256

int count_words(const char text[]) {
    int count = 0;
    bool in_word = false;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace((unsigned char)text[i])) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;   /* cuvant nou */
            count++;
        }
    }
    return count;
}

bool is_palindrome(const char text[]) {
    char letters[MAX_LEN];
    int n = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (isalnum(ch)) {
            letters[n++] = (char)tolower(ch);
        }
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (letters[i] != letters[j]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char text[MAX_LEN];

    printf("Text: ");
    fgets(text, sizeof text, stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Cuvinte: %d\n", count_words(text));
    printf("Palindrom: %s\n",
           is_palindrome(text) ? "da" : "nu");
    return 0;
}
