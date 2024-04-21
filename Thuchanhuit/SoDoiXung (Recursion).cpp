#include<iostream>

int reverse(int n, int temp) {
    if(n == 0)
        return temp;
    temp = (temp * 10) + (n % 10);
    return reverse(n / 10, temp);
}

bool is_SoDoiXung(int n) {
    return (n == reverse(n, 0));
}

int main() {
    int n;
    std::cin >> n;
    if (is_SoDoiXung(n))
        std::cout << std::boolalpha << true;
    else
        std::cout << std::boolalpha << false;
    return 0;
}

