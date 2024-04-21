#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void XoaKhoangTrangDu_SauDauCham(char *s);

int main() {
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << endl;
	char s1[MAX];
	strcpy(s1, s);
	XoaKhoangTrangDu_SauDauCham(s1);
	cout << s1 << endl;
	return 0;
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


