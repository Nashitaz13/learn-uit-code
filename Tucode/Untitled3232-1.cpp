
#include <iostream>
using namespace std;

void hoanvi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void DaoNguocMang(int *a, int n){
	int m = n / 2;
	int j = n - 1;
	for (int i = 0; i < m; i++){
		hoanvi(&a[i], &a[j]);
		j--;
	}
}

int* NhapMang(int n) {
    int* p = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    return p;
}
void XuatMang(int *p, int n){
	for (int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
}
int main() {
    int *a, n;
    cin >> n;
    a=NhapMang(n);
    DaoNguocMang(a, n);
    XuatMang(a, n);
    return 0;
}
