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

void ChuanHoa(char s[]) {
	int i = 0;
    while (s[i] == ' ') {
        strcpy(&s[i], &s[i + 1]);
    }
    while (s[strlen(s) - 1] == ' ') {
        s[strlen(s) - 1] = '\0';
    }
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            strcpy(&s[i], &s[i + 1]);
            i--;
        }
    }
    //Viet hoa ky tu dau tien cua moi tu
    for (i = 0; i < strlen(s); i++) {
        if (i == 0 || s[i - 1] == ' ') {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
}

void Nhap(SinhVien &sv) {
    cin.ignore();
    sv.MASV = new char[12];
    sv.HoTen = new char[30];
    cin.getline(sv.MASV, 12);
    cin.getline(sv.HoTen, 30);
    ChuanHoa(sv.HoTen);
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


