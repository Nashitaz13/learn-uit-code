
#include <iostream>
#define MAXN 400000

void NhapMang(int a[], int &n, int i = 0) {
    if (i == 0) std::cin >> n;
    if (i < n) {
        std::cin >> a[i];
        NhapMang(a, n, i + 1);
    }
}

int LinearSearch(int a[], int n, int x, int i = 0) {
    if (i == n) return -1;
    if (a[i] == x) return i;
    return LinearSearch(a, n, x, i + 1);
}

int main() {
    int a[MAXN], n, x;

    std::cin >> x;

    NhapMang(a, n);

    int i= LinearSearch(a, n, x);

    if (i==-1) std::cout << "false";
    else std::cout << "true";
    return 0;
}

