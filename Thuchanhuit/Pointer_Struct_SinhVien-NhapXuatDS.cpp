#include <iomanip>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char *MASV;
    char *HoTen;
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};


void Nhap(SinhVien &sv) {
    cin.ignore();
    sv.MASV = new char[20];
    sv.HoTen = new char[30];
    cin.getline(sv.MASV, 20);
    cin.getline(sv.HoTen, 30);
    cin.getline(sv.NgaySinh, 12);
    cin >> sv.GioiTinh;
    sv.GioiTinh = toupper(sv.GioiTinh);
    cin >> sv.DiemToan >> sv.DiemLy >> sv.DiemHoa;
    sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa) / 3;
}

void Xuat(SinhVien sv) {
    cout << sv.MASV << "\t" << sv.HoTen << "\t" << sv.NgaySinh << "\t" << sv.GioiTinh << "\t";
    cout << sv.DiemToan << "\t" << sv.DiemLy << "\t" << sv.DiemHoa << "\t";
    cout << setprecision(3) << sv.DTB << endl;
}

void Nhap(SinhVien *&A, int &n) {
    cin >> n;
    A = new SinhVien[MAXN];
    for (int i = 0; i < n; i++) {
        Nhap(A[i]);
    }
}

void Xuat(SinhVien *A, int n) {
    for (int i = 0; i < n; i++) {
        Xuat(A[i]);
    }
}


int main() {
    SinhVien *A;
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}


