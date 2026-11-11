// Bubble sort si std::sort din biblioteca
#include <iostream>
#include <vector>
#include <algorithm>

void bubble_sort(std::vector<int> &values) {
    int n = static_cast<int>(values.size());
    bool swapped = true;
    for (int pass = 0; swapped; pass++) {
        swapped = false;
        for (int i = 0; i < n - 1 - pass; i++) {
            if (values[i] > values[i + 1]) {
                std::swap(values[i], values[i + 1]);
                swapped = true;
            }
        }
    }
}

void print_vector(const std::vector<int> &values) {
    std::cout << values[0];
    for (size_t i = 1; i < values.size(); i++) {
        std::cout << ' ' << values[i];
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> a = {29, 3, 17, 8, 42, 1, 15};
    std::vector<int> b = a;    // copie

    bubble_sort(a);
    std::sort(b.begin(), b.end());
    print_vector(a);
    print_vector(b);
    return 0;
}
