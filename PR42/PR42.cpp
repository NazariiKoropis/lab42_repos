#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x_start, x_end, x_step;

    cout << "X_start = ";
    cin >> x_start;
    cout << "X_end = ";
    cin >> x_end;
    cout << "X_step = ";
    cin >> x_step;

    cout << fixed;
    cout << "----------------------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |"
        << setw(15) << "y" << " |" << endl;
    cout << "----------------------------------------" << endl;

    for (double x = x_start; x <= x_end; x += x_step) {
        double y;

        if (x < -1) {
            y = 2 * x - 13.5 - (sin(x)) / (1 + pow(cos(x), 2));
        }
        else if (x <= 1) {
            y = 2 * x - 13.5 - (pow(cos(sin(x)), 2) - 1);
        }
        else {
            y = 2 * x - 13.5 - log10(x + 0.4);
        }

        cout << "|" << setw(8) << setprecision(2) << x
            << " |" << setw(15) << setprecision(5) << y
            << " |" << endl;
    }

    cout << "----------------------------------------" << endl;
    return 0;
}
