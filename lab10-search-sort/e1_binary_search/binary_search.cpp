// Cautare binara intr-un tablou sortat
#include <iostream>
#include <vector>

int main() {
    int n, target;

    std::cout << "n = ";
    std::cin >> n;
    std::vector<int> values(n);
    std::cout << "Elemente sortate: ";
    for (int &value : values) {
        std::cin >> value;
    }
    std::cout << "Valoarea cautata: ";
    std::cin >> target;

    int low = 0, high = n - 1;
    int position = -1, steps = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        steps++;
        if (values[mid] == target) {
            position = mid;
            break;
        } else if (values[mid] < target) {
            low = mid + 1;     // dreapta
        } else {
            high = mid - 1;    // stanga
        }
    }
    std::cout << "Pozitia: " << position
              << ", pasi: " << steps << '\n';
    return 0;
}
