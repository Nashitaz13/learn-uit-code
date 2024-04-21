#include <bits/stdc++.h>
#define MAXN 100
using namespace std;

int Input(){
	int n;
	cin >> n;
	return n;
}

void NhapMang(int a[], int N) {
    for (int i = 0; i < N; i++)
        cin >> a[i];
}

void XuatMang(int a[], int N) {
    for (int i = 0; i < N; i++)
        cout << a[i] << '\t';
}

bool SoChanGiamDan(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0)
        return a > b;
    else if (a % 2 == 0)
        return true;
    else if (b % 2 == 0)
        return false;
    else
        return a < b;
}

void SapXepSoChanGiamDan(int A[], int N) {
    // S?p x?p m?ng theo th? t? gi?m d?n
    std::sort(A, A + N, std::greater<int>());

    // Duy?t qua m?ng và d?t các s? ch?n ? d?u
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0 && A[i] != 0) {
            std::swap(A[i], A[index]);
            index++;
        }
    }
}

int main() {
    int a[MAXN], n;
    n=Input();
    NhapMang(a, n);
    SapXepSoChanGiamDan(a, n);
    XuatMang(a, n);
    return 0;
}

