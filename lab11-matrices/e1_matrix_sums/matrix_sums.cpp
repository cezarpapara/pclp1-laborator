// Matrice: sume pe linii si pe coloane
#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int rows, cols;

    std::cout << "Linii si coloane: ";
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> a(
        rows, std::vector<int>(cols));
    std::cout << "Elementele, pe linii:\n";
    for (auto &row : a) {
        for (int &value : row) {
            std::cin >> value;
        }
    }

    for (const auto &row : a) {
        int row_sum = 0;
        for (int value : row) {
            std::cout << std::setw(4) << value;
            row_sum += value;
        }
        std::cout << " | " << row_sum << '\n';
    }
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += a[i][j];
        }
        std::cout << std::setw(4) << col_sum;
    }
    std::cout << '\n';
    return 0;
}
