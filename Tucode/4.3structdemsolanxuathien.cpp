#include <iostream>
#define MAXN 100

struct SONGUYEN {
    int a; // s? nguyên c?n d?m s? l?n xu?t hi?n trong m?ng A
    int count; // S? l?n xu?t hi?n c?a s? nguyên a trong A
};

void NhapMang(int *a, int &na) {
    std::cin >> na;
    for (int i = 0; i < na; i++) {
        std::cin >> a[i];
    }
}

void DemSoLanXuatHien(int *a, int na, SONGUYEN *b, int &nb) {
    nb = 0;
    for (int i = 0; i < na; i++) {
        int j;
        for (j = 0; j < nb; j++)
            if (a[i] == b[j].a) break;
        if (j == nb) {
            b[nb].a = a[i];
            b[nb].count = 1;
            nb++;
        } else {
            b[j].count++;
        }
    }
}

void Xuat(SONGUYEN *a, int n) {
    for (int i = 0; i < n; i++)
        std::cout << a[i].a << " xuat hien " << a[i].count << " lan"
                  << std::endl;
}

int main() {
    int a[MAXN];
    SONGUYEN b[MAXN];
    int na, nb;

    NhapMang(a, na);

    DemSoLanXuatHien(a, na, b, nb);

    Xuat(b, nb);

    return 0;
}

