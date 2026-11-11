// std::map: tablou asociativ cheie -> valoare
#include <iostream>
#include <map>

int main() {
    std::map<int, int> frequency;
    int n, grade;

    std::cout << "Numarul de note: ";
    std::cin >> n;
    std::cout << "Notele: ";
    for (int i = 0; i < n; i++) {
        std::cin >> grade;
        frequency[grade]++;    // acces dupa cheie
    }

    // map pastreaza cheile in ordine crescatoare
    for (const auto &[key, count] : frequency) {
        std::cout << "Nota " << key << ": "
                  << count << '\n';
    }
    return 0;
}
