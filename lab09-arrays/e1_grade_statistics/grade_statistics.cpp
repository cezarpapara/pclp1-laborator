// std::vector: tablou cu dimensiune variabila
#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int n;

    std::cout << "Numarul de note: ";
    std::cin >> n;
    std::vector<int> grades(n);
    std::cout << "Notele: ";
    for (int i = 0; i < n; i++) {
        std::cin >> grades[i];
    }

    int min = grades[0], max = grades[0], sum = 0;
    for (int grade : grades) {     // "for each"
        sum += grade;
        if (grade < min) {
            min = grade;
        }
        if (grade > max) {
            max = grade;
        }
    }
    double average = static_cast<double>(sum) / n;

    int above = 0;
    for (int grade : grades) {
        if (grade > average) {
            above++;
        }
    }
    std::cout << "Minim: " << min << ", maxim: "
              << max << '\n' << std::fixed
              << std::setprecision(2)
              << "Media: " << average << '\n'
              << "Peste medie: " << above << '\n';
    return 0;
}
