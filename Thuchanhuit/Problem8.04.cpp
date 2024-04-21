#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);

int myStrcmp(const char *s1, const char *s2);

int myStrlen(const char *s);

int main() {
    char s[MAX];
    cin.getline(s, MAX);    //Nhap chuoi s
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemKyTu(s);

    return 0;
}

void DemKyTu(char s[]) {
    char appeared[MAX] = {0}; //Mang luu tru cac ky tu da xuat hien
    int count[MAX] = {0};     //Mang dem so lan xuat hien cua ky tu
    int n = 0;                //So luong ky tu da xuat hien
    for (int i = 0; i < myStrlen(s); i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (s[i] == appeared[j]) {
                found = true;
                count[j]++;
                break;
            }
        }
        if (!found) {
            appeared[n] = s[i];
            count[n] = 1;
            n++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << appeared[i] << ": " << count[i] << endl;
}

int myStrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int myStrlen(const char *s) {
    const char *sc;
    for (sc = s; *sc != '\0'; ++sc);
    return sc - s;
}

