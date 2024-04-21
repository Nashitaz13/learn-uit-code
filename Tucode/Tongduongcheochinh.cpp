#include <iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &n) {
    std::cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> a[i][j];
}

int TongDuongCheoChinh(int a[MAXR][MAXC], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}



int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << TongDuongCheoChinh(a, n);
    return 0;
}

