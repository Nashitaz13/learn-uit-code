
#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void XuatMang(int A[], int N) {
    std::cout << N << '\n';
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}

void TronMangTangDan(int *c, int &nc, int *a, int na, int *b, int nb) {
    nc = na + nb;
    int i = 0, j = 0, k = 0;

    while (i < na && j < nb) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < na) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < nb) {
        c[k] = b[j];
        j++;
        k++;
    }
}



int main() {
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    std::cin >> na;
    std::cin >> nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    TronMangTangDan(c, nc, a, na, b, nb);
    XuatMang(c, nc);
    return 0;
}

