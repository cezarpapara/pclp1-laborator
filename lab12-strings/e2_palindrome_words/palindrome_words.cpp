// Numararea cuvintelor; test de palindrom
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

int count_words(const std::string &text) {
    std::istringstream stream(text);
    std::string word;
    int count = 0;
    while (stream >> word) {   // cuvant cu cuvant
        count++;
    }
    return count;
}

bool is_palindrome(const std::string &text) {
    std::string letters;
    for (unsigned char ch : text) {
        if (std::isalnum(ch)) {
            letters += static_cast<char>(
                std::tolower(ch));
        }
    }
    std::string reversed(letters.rbegin(),
                         letters.rend());
    return letters == reversed;
}

int main() {
    std::string text;

    std::cout << "Text: ";
    std::getline(std::cin, text);

    std::cout << "Cuvinte: " << count_words(text)
              << "\nPalindrom: "
              << (is_palindrome(text) ? "da" : "nu")
              << '\n';
    return 0;
}
