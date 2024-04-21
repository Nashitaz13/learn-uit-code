#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300


void XoaKhoangTrangDu_TruocDauCham(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ' && s[i+1] == '.') {
            while (s[i] == ' ' && i >= 0) {
                for (int j = i; j < n; j++) {
                    s[j] = s[j+1];
                }
                i--;
                n--;
            }
        }
    }
}

void them_khoang_trang_sau_dau_cham(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '.' && s[i+1] != ' ' && s[i+1] != '\0') {
            for (int j = n; j > i; j--) {
                s[j+1] = s[j];
            }
            s[i+1] = ' ';
            n++;
        }
    }
}

void XoaKhoangTrangDu_SauDauCham(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            while (s[i + 1] == ' ' && s[i + 2] == ' ') {
                for (int j = i + 1; j < n; j++)
                    s[j] = s[j + 1];
                n--;
            }
        }
    }
}

void ChuanHoaDauCau(char *s){
	them_khoang_trang_sau_dau_cham(s);
	XoaKhoangTrangDu_SauDauCham(s);
    XoaKhoangTrangDu_TruocDauCham(s);
}

int main() {
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << endl;
	char s1[MAX];
	strcpy(s1, s);
    ChuanHoaDauCau(s1);
	cout << s1 << endl;
	return 0;
}
