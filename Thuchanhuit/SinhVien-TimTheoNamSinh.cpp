
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien A[], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan;
        cin >> A[i].DiemLy;
        cin >> A[i].DiemHoa;
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
    }
}

void TimTheoNamSinh(SinhVien A[], int n, int namsinh) {
    for (int i = 0; i < n; i++) {
        string namSinh(A[i].NgaySinh);
        string nam = namSinh.substr(6, 4);
        if (stoi(nam) == namsinh) {
            cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t" << setprecision(3) << A[i].DTB << endl;
        }
    }
}

int main() {
    SinhVien A[MAXN];
    int n, namsinh;
    std::cin >> namsinh;
    Nhap(A, n);
    TimTheoNamSinh(A, n, namsinh);
    return 0;
}

