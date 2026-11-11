// Secunde -> ore:minute:secunde
#include <iostream>
#include <iomanip>

const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 3600;

int main() {
    int total;

    std::cout << "Numar de secunde: ";
    std::cin >> total;

    int hours = total / SECONDS_PER_HOUR;
    int rest = total % SECONDS_PER_HOUR;
    int minutes = rest / SECONDS_PER_MINUTE;
    int seconds = rest % SECONDS_PER_MINUTE;

    std::cout << total << " s = "
              << std::setfill('0')
              << std::setw(2) << hours << ':'
              << std::setw(2) << minutes << ':'
              << std::setw(2) << seconds << '\n';
    return 0;
}
