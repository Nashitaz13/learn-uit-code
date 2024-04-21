#include <iostream>
#define MAXN 1000

void NhapMang(int a[], int &n) {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
}

int DemMangConTang(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            count++;
            while (a[i] <= a[i + 1] && i < n - 1) {
                i++;
            }
        }
    }
    return count;
}

int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    std::cout << DemMangConTang(a, n);
    return 0;
}

