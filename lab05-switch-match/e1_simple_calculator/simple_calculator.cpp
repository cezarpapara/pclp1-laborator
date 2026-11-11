// Calculator simplu cu switch
#include <iostream>
#include <iomanip>

int main() {
    double a, b;
    char op;

    std::cout << "Expresie (ex. 12 / 4): ";
    std::cin >> a >> op >> b;
    std::cout << std::fixed << std::setprecision(2);

    switch (op) {
    case '+':
        std::cout << "= " << a + b << '\n';
        break;
    case '-':
        std::cout << "= " << a - b << '\n';
        break;
    case '*':
        std::cout << "= " << a * b << '\n';
        break;
    case '/':
        if (b == 0) {
            std::cout << "Eroare: impartire la 0\n";
        } else {
            std::cout << "= " << a / b << '\n';
        }
        break;
    default:
        std::cout << "Operator necunoscut: " << op
                  << '\n';
    }
    return 0;
}
