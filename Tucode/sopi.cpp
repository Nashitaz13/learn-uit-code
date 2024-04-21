#include <iostream>
#include <cmath>
#include <iomanip>

double approximate_pi(double epsilon) {
    double pi = 0;
    int n = 0;
    double term = 1.0 / (2 * n + 1);
    while (term > epsilon) {
        pi += pow(-1, n) * term;
        n += 1;
        term = 1.0 / (2 * n + 1);
    }
    return 4 * pi;
}

int main() {
    double epsilon;
    std::cin >> epsilon;
    std::cout  << std::setprecision(11) << approximate_pi(epsilon) << std::endl;
    return 0;
}

