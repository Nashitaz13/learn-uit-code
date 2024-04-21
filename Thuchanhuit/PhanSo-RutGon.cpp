#include <iostream>
#include <string>
#include <math.h>
#define MAXN 100
#define ll long long
using namespace std;

struct PhanSo{
	int tu;
	int mau;
};

int gcd(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}// hieu qua nhat

int lcm(int a, int b){
    return a/gcd(a,b)*b; // a*b/gcd(a,b);
}

void RutGonPhanSo(int &tu, int &mau) {
    int ucln = gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

void Nhap(PhanSo A[], int &n){
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> A[i].tu >> A[i].mau;
	}
}

void Xuat(PhanSo A[], int n){
	for (int i = 0; i < n; i++){
		if (A[i].mau == 0){
			cout << "Khong thoa yeu cau bai toan" << endl;
		} else
		if (A[i].tu == 0){
			cout << 0 << endl;
		} else
		if (A[i].tu == A[i].mau) {
			cout << 1 << endl;
		} else if(A[i].tu % A[i].mau == 0){
			cout << A[i].tu / A[i].mau << endl;
		} else 
		{
		RutGonPhanSo(A[i].tu, A[i].mau);
		if (A[i].mau < 0){
			cout << A[i].tu * -1 << "/" << abs(A[i].mau) << endl;
		} else{
		cout << A[i].tu << "/" << A[i].mau << endl;
			}
		}
	}
}

int main(){
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}


