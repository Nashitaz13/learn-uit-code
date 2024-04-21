//Tinh tong 2 doi tuong phan so
//Xdung class PhanSo, thuc hien nhap 2 ps q va q, tinh p + q, rut gon va in ra ket qua
//In: 4 so nguyen duong lan luot la tu va mau so cua p roi den q. Khong qua 9 chu so
//Ham main co san

#include <bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        long long tu, mau;
    public:
        PhanSo(long long tu, long long mau);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutgon();
        friend PhanSo operator + (PhanSo a, PhanSo b);
};

PhanSo::PhanSo(long long tu, long long mau){
    this->tu = tu;
    this->mau = mau;
}

ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}

istream& operator >> (istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}

long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a/gcd(a, b)*b;
}

void PhanSo::rutgon(){
    long long g = gcd(tu, mau);
    tu /= g;
    mau /= g;
}

PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1,1);
    long long mc = lcm(a.mau, b.mau);
    tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    tong.mau = mc;
    long long g = gcd(tong.tu, tong.mau);
    tong.tu /= g;
    tong.mau /= g;
    return tong;
}

int main(){
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}

