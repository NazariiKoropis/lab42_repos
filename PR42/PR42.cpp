#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x_start, x_end, x_step;

    std::cout << "X_start = "; std::cin >> x_start;
    std::cout << "x_end = "; std::cin >> x_end;
    std::cout << "x_step = "; std::cin >> x_step;

    std::cout << std::fixed;
    std::cout << "---------------------------" << std::endl;
    std::cout << "|" << std::setw(5) << "x" << "     |"
        << std::setw(7) << "y" << "       |" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for (double x = x_start; x < x_end; x += x_step) {
        double y;
        if (x < -1) {
            y = 2 * x - 13.5 - (std::sin(x)) / (1 + std::pow(std::cos(x), 2));
        }
        else if (x <= 1) {
            y = 2 * x - 3.5 * std::pow(std::cos(std::sin(x)), 2) - 1;
        }
        else {
            y = 2 * x - 13.5 * std::log(x + 0.4);
        }

        std::cout << "|" << std::setw(7) << std::setprecision(2) << x
            << "   |" << std::setw(10) << std::setprecision(3) << y
            << "    |" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

    return 0;
}