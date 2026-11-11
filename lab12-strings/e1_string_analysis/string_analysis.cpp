// Lungime, vocale, transformare in majuscule
#include <iostream>
#include <string>
#include <cctype>

bool is_vowel(unsigned char ch) {
    switch (std::tolower(ch)) {
    case 'a': case 'e': case 'i':
    case 'o': case 'u':
        return true;
    default:
        return false;
    }
}

int main() {
    std::string text, upper;

    std::cout << "Text: ";
    std::getline(std::cin, text);  // toata linia

    int vowels = 0;
    for (unsigned char ch : text) {
        if (is_vowel(ch)) {
            vowels++;
        }
        upper += static_cast<char>(toupper(ch));
    }

    std::cout << "Lungime: " << text.length()
              << "\nVocale: " << vowels << '\n'
              << "Majuscule: " << upper << '\n';
    return 0;
}
