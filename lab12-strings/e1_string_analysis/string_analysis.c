/* Lungime, vocale, transformare in majuscule */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 256

bool is_vowel(unsigned char ch) {
    switch (tolower(ch)) {
    case 'a': case 'e': case 'i':
    case 'o': case 'u':
        return true;
    default:
        return false;
    }
}

int main(void) {
    char text[MAX_LEN], upper[MAX_LEN];

    printf("Text: ");
    fgets(text, sizeof text, stdin);  /* nu gets! */
    text[strcspn(text, "\n")] = '\0'; /* fara \n */

    size_t length = strlen(text);
    int vowels = 0;
    for (size_t i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (is_vowel(ch)) {
            vowels++;
        }
        upper[i] = (char)toupper(ch);
    }
    upper[length] = '\0';  /* terminatorul */

    printf("Lungime: %zu\n", length);
    printf("Vocale: %d\n", vowels);
    printf("Majuscule: %s\n", upper);
    return 0;
}
