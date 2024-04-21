#include <iostream>
#include <iomanip>
#define MAXN 100
using namespace std;

void NhapMang(int a[], int &n){
    cin >> n;
    for (int i = 0;i < n; i++){
        cin >> a[i];
    }
}

void XuatMang(int a[], int &n){
    if (n == 0){
    cout << "Mang co " << 0 << " phan tu.";
    } else if (n > 1){
    cout << "Mang co " << n << " phan tu: {";
    } 
    for (int i = 0; i < n; i++){
        if (n == 1){
            cout << a[0];
        }
            cout << a[i] << ", ";
        if (i == n - 1){
            cout << a[i] << "}.";
        }
    }
}


int main(){
    int a[MAXN], n;
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}   