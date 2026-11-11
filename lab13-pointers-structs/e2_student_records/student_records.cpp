// struct cu std::string, intr-un std::vector
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

struct Student {
    std::string name;
    double grade;
};

int main() {
    int n;

    std::cout << "Numarul de studenti: ";
    std::cin >> n;
    std::vector<Student> students(n);
    for (Student &student : students) {
        std::cout << "Nume si nota: ";
        std::cin >> student.name >> student.grade;
    }

    const Student *best = &students[0];
    double sum = 0;
    for (const Student &student : students) {
        sum += student.grade;
        if (student.grade > best->grade) {
            best = &student;
        }
    }
    std::cout << std::fixed << std::setprecision(2)
              << "Media grupei: " << sum / n << '\n'
              << "Cel mai bun: " << best->name
              << " (" << best->grade << ")\n";
    return 0;
}
