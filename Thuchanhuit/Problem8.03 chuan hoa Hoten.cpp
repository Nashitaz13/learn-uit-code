#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void ChuanHoa(char s[]);

int main() {
    char s[MAX];
    cin.getline(s, MAX);    //Nhap chuoi s
    ChuanHoa(s);
    cout << s << endl;
    return 0;
}


int myStrlen(char s[], int k) {
    int dem = 0;
    while (s[k] != '\0') {
        dem++;
        k++;
    }
    return dem;
}

void myMemmove(char s[], int vt, int k) {
    int n = myStrlen(s, 0);
    for (int i = vt; i < n - k; i++) {
        s[i] = s[i + k];
    }
    s[n - k] = '\0';
}

int myStrstr(char s[], char s1[]) {
    int n = myStrlen(s, 0);
    int m = myStrlen(s1, 0);
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && s[i + j] == s1[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}

void ChuanHoa(char s[]) {
    //Xoa khoang trang dau chuoi
    while (s[0] == ' ') {
        myMemmove(s, 0, 1);
    }
    //Xoa khoang trang cuoi chuoi
    while (s[myStrlen(s, 0) - 1] == ' ') {
        s[myStrlen(s, 0) - 1] = '\0';
    }
    //Xoa khoang trang giua cac tu
    for (int i = 0; i < myStrlen(s, 0) - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            myMemmove(s, i, 1);
            i--;
        }
    }
    //Viet hoa ky tu dau tien cua moi tu
    for (int i = 0; i < myStrlen(s, 0); i++) {
        if (i == 0 || s[i - 1] == ' ') {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
}
