// Matrice patratica: diagonale, transpusa
#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int n;

    std::cout << "n = ";
    std::cin >> n;
    std::vector<std::vector<int>> a(
        n, std::vector<int>(n));
    std::cout << "Elementele, pe linii:\n";
    for (auto &row : a) {
        for (int &value : row) {
            std::cin >> value;
        }
    }

    int main_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++) {
        main_sum += a[i][i];
        secondary_sum += a[i][n - 1 - i];
    }
    std::cout << "Diagonala principala: "
              << main_sum << '\n'
              << "Diagonala secundara: "
              << secondary_sum << '\n';

    std::cout << "Transpusa:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(4) << a[j][i];
        }
        std::cout << '\n';
    }
    return 0;
}
