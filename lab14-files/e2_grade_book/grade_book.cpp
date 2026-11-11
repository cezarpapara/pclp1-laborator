// Aplicatie: clasamentul unei grupe
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

const int GRADE_COUNT = 3;
const double PASS_MARK = 5.0;

struct Student {
    std::string name;
    double average;
};

std::vector<Student> read_students(
        const std::string &path) {
    std::ifstream file(path);
    std::vector<Student> students;
    Student student;
    while (file >> student.name) {
        double sum = 0, grade;
        for (int k = 0; k < GRADE_COUNT; k++) {
            file >> grade;
            sum += grade;
        }
        student.average = sum / GRADE_COUNT;
        students.push_back(student);
    }
    return students;
}

// Media descrescator, apoi numele crescator
bool by_average(const Student &a,
                const Student &b) {
    if (a.average != b.average) {
        return a.average > b.average;
    }
    return a.name < b.name;
}

int write_ranking(const std::string &path,
        const std::vector<Student> &students) {
    std::ofstream file(path);
    file << std::fixed << std::setprecision(2);
    int passed = 0, position = 1;
    for (const Student &s : students) {
        bool ok = s.average >= PASS_MARK;
        passed += ok;
        file << position++ << ". " << s.name
             << ' ' << s.average << ' '
             << (ok ? "promovat" : "nepromovat")
             << '\n';
    }
    return passed;
}

int main() {
    std::vector<Student> students =
        read_students("students.txt");
    if (students.empty()) {
        std::cout << "Nu pot citi students.txt\n";
        return 1;
    }
    std::sort(students.begin(), students.end(),
              by_average);
    int passed = write_ranking("ranking.txt",
                               students);
    std::cout << "Studenti: " << students.size()
              << ", promovati: " << passed << '\n'
              << "Clasament scris in ranking.txt\n";
    return 0;
}
