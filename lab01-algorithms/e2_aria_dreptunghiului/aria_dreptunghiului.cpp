// Aria unui dreptunghi
// (denumiri in limba romana)
#include <iostream>
#include <iomanip>

int main() {
    double lungime, latime;

    std::cout << "Lungimea: ";
    std::cin >> lungime;
    std::cout << "Latimea: ";
    std::cin >> latime;

    double aria = lungime * latime;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Aria este " << aria << '\n';
    return 0;
}
