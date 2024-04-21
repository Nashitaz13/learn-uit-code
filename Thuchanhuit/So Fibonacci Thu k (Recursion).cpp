#include<iostream>

long long Fibonacci(int k) {
    if (k <= 1)
        return k;
    else
        return Fibonacci(k - 1) + Fibonacci(k - 2);
}

int main() {
    int k;
    std::cin >> k;

    std::cout << Fibonacci(k);

    return 0;
}

