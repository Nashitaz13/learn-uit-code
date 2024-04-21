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

PhanSo Nhap() {
    PhanSo ps;
    cin >> ps.tu;
    cin >> ps.mau;
    return ps;
}

void Nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}

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


PhanSo Tru(PhanSo a, PhanSo b) {
    PhanSo A;
    A.tu = a.tu * b.mau - a.mau * b.tu;
    A.mau = a.mau * b.mau;
    return A;
}

void Xuat(PhanSo A) {
	 if (A.tu == 0){
			cout << 0 << endl;
		} else
		if (A.tu == A.mau) {
			cout << 1 << endl;
		} else if(A.tu % A.mau == 0){
			cout << A.tu / A.mau << endl;
		} else 
		{
		RutGonPhanSo(A.tu, A.mau);
		if (A.mau < 0){
			cout << A.tu * -1 << "/" << abs(A.mau) << endl;
		} else {
		cout << A.tu << "/" << A.mau << endl;	
		}
	}
}


int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Tru(a, b));
    return 0;
}


