
#include <iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &r, int &c) {
    std::cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            std::cin >> a[i][j];
    }
}

int TongToanMang(int a[MAXR][MAXC], const int &r, const int &c) {
    int sum = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum += a[i][j];
    return sum;
}


int main() {
    int a[MAXR][MAXC], r, c;
    NhapMaTran(a, r, c);
    std::cout << TongToanMang(a, r, c);
    return 0;
}



