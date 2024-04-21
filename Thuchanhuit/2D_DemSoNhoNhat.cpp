#include <iostream>
#include <climits>

#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &r, int &c) {
    std::cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> a[i][j];
        }
    }
}

void DemCacSoNhoNhat(int a[MAXR][MAXC], int r, int c, int &count) {
    int min = INT_MAX;
    count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                count = 1;
            } else if (a[i][j] == min) {
                count++;
            }
        }
    }
}

int main() {
    int a[MAXR][MAXC], r, c, count;
    NhapMaTran(a, r, c);
    DemCacSoNhoNhat(a, r, c, count);
    std::cout << count;
    return 0;
}

