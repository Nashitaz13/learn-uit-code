#include <iostream>
#include <cstring>
#define MAX 200

struct SOLON {
    int *so;
    int n;
};

void input(SOLON &a) {
    std::string s;
    std::cin >> s;
    a.n = s.length();
    a.so = new int[a.n]; // C?p phát b? nh? cho m?ng 'so'
    for (int i = 0; i < a.n; i++) {
        a.so[a.n - i - 1] = s[i] - '0';
    }
}

SOLON* input() {
    SOLON *a = new SOLON;
    input(*a);
    return a;
}

SOLON Cong(SOLON a, SOLON b) {
    SOLON S;
    S.so = new int[MAX]; // C?p phát b? nh? cho m?ng 'so'
    int carry = 0;
    S.n = std::max(a.n, b.n);
    for (int i = 0; i < S.n; i++) {
        if (i < a.n) carry += a.so[i];
        if (i < b.n) carry += b.so[i];
        S.so[i] = carry % 10;
        carry /= 10;
    }
    if (carry > 0) {
        S.so[S.n++] = carry;
    }
    return S;
}

void output(SOLON *a) {
    for (int i = a->n - 1; i >= 0; i--) {
        std::cout << a->so[i];
    }
    std::cout << std::endl;
}

int main() {
    SOLON a, *b, S;
    input(a);
    b = input();
    S = Cong(a, *b);
    output(&a);
    output(b);
    output(&S);

    return 0;
}

