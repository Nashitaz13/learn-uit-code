#include <iostream>
#include <cmath>

double factorial(int n) {
    double result = 1;
    for(int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

double sum(int n) {
    double result = 0;
    for(int i = 1; i <= n; ++i)
        result += i;
    return result;
}

int main() {
    int n;
    std::cin >> n;

    double S1 = 0, S2 = 0, S3 = 0;

    for (int i = 1; i <= n; ++i) {
        S1 += pow(i, i);
        S2 += factorial(i);
        S3 += 1 / sum(i);
    }

    std::cout << S1 << "\n";
    std::cout << S2 << "\n";
    std::cout << S3 << "\n";

    return 0;
}
