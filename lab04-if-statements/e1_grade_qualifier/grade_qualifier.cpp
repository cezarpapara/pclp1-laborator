// Calificativul corespunzator unei note
#include <iostream>

int main() {
    int grade;

    std::cout << "Nota (1-10): ";
    std::cin >> grade;

    if (grade < 1 || grade > 10) {
        std::cout << "Nota invalida\n";
    } else if (grade < 5) {
        std::cout << "Insuficient\n";
    } else if (grade <= 6) {
        std::cout << "Suficient\n";
    } else if (grade <= 8) {
        std::cout << "Bine\n";
    } else {
        std::cout << "Foarte bine\n";
    }
    return 0;
}
