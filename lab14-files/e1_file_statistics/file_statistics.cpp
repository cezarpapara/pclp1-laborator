// Fluxuri de fisier: ifstream si ofstream
#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
    std::ifstream input("numbers.txt");
    if (!input) {
        std::cout << "Nu pot citi numbers.txt\n";
        return 1;
    }

    int value, count = 0, min = 0, max = 0;
    long long sum = 0;
    while (input >> value) {
        if (count == 0 || value < min) {
            min = value;
        }
        if (count == 0 || value > max) {
            max = value;
        }
        sum += value;
        count++;
    }
    if (count == 0) {
        std::cout << "Fisierul nu contine numere\n";
        return 1;
    }

    std::ofstream output("report.txt");
    if (!output) {
        std::cout << "Nu pot crea report.txt\n";
        return 1;
    }
    output << "Numere: " << count << '\n'
           << "Suma: " << sum << '\n'
           << "Minim: " << min << '\n'
           << "Maxim: " << max << '\n'
           << std::fixed << std::setprecision(2)
           << "Media: "
           << static_cast<double>(sum) / count
           << '\n';
    // fisierele se inchid automat la iesirea
    // din functie (destructorii fluxurilor)
    std::cout << "Raport scris in report.txt\n";
    return 0;
}
