// Citire pana la valoarea santinela 0
#include <iostream>
#include <iomanip>

int main() {
    int value, count = 0, sum = 0, max = 0;
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Numar (0 = stop): ";
    std::cin >> value;
    while (value != 0) {
        if (count == 0 || value > max) {
            max = value;
        }
        sum += value;
        count++;
        std::cout << "Numar (0 = stop): ";
        std::cin >> value;
    }

    if (count == 0) {
        std::cout << "Nu s-a citit niciun numar\n";
    } else {
        double average =
            static_cast<double>(sum) / count;
        std::cout << "Numere: " << count << '\n'
                  << "Media: " << average << '\n'
                  << "Maximul: " << max << '\n';
    }
    return 0;
}
