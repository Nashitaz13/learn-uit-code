

#include <iostream>
#include <cmath>
#define MAXN 100
#include <vector>


bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

void NhapMang(int *A, int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void TachMang(int *A, const int &N, int *B, int &NB, int *C, int &NC) {
    NB = NC = 0;
    for (int i = 0; i < N; i++)
        if (is_prime(A[i]))
            B[NB++] = A[i];
        else
            C[NC++] = A[i];
}

void XuatMang(int *A, const int &N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    NhapMang(a, na);
    TachMang(a, na, b, nb, c, nc);

    XuatMang(a, na); std::cout << std::endl;
    XuatMang(b, nb); std::cout << std::endl;
    XuatMang(c, nc); std::cout << std::endl;

    return 0;
}
