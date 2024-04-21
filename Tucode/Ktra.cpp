#include <iostream>
#include <string>
#define MAXN 200
using namespace std;

void chuyen_kieu_chu(char &a) {
    if (a >= 'A' && a <= 'Z') {
        a = a + 32;
    } else if (a >= 'a' && a <= 'z') {
        a = a - 32;
    }
}

void Input(int &n){
	cin >> n;
}

void NhapMang(char a[], int n){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        chuyen_kieu_chu(a[i]);
    }
}
void XuatMang(char a[], int n){
	for (int i = 0; i < n; i++) {
        cout << a[i] << "	";
    }
}
int main() {
    char a[MAXN];
    int n;
    Input(n); 
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}

