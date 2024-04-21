#include <iostream>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') i++;
    return s1[i] - s2[i];
}

int myStrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void myStrcpy(char s[], int vt, char s1[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s[vt + i] = s1[i];
        i++;
    }
    s[vt + i] = '\0';
}

void myMemmove(char s[], int vt, int k) {
    int len = myStrlen(s);
    for (int i = vt; i <= len - k; i++) {
        s[i] = s[i + k];
    }
}

int myStrstr(char s[], char s1[]) {
    int len = myStrlen(s);
    int len1 = myStrlen(s1);
    for (int i = 0; i <= len - len1; i++) {
        int j = 0;
        while (j < len1 && s[i + j] == s1[j]) j++;
        if (j == len1) return i;
    }
    return -1;
}

void mySubstr(char s[], int b, int count, char ss[]) {
    for (int i = 0; i < count; i++) {
        ss[i] = s[b + i];
    }
    ss[count] = '\0';
}

bool myStrcat(char s1[], char s2[]) {
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);
    if (len1 + len2 < MAX) {
        myStrcpy(s1, len1, s2);
        return true;
    }
    return false;
}

void DemTieng(char s1[]) {
    char s2[MAX], s3[MAX];
    int d[MAX] = {0};
    int n = 0;
    for (int i = 0; i < myStrlen(s1); i++) {
        if (s1[i] != ' ') {
            int j = i, count = 0;
            while (s1[j] != ' ' && s1[j] != '\0') {
                count++;
                j++;
            }
            mySubstr(s1, i, count, s2);
            int vt = myStrstr(s3, s2);
            if (vt == -1 || s3[vt + count] != ' ') {
                myStrcat(s3, s2);
                myStrcat(s3, " ");
                d[n]++;
                n++;
            } else {
                d[vt / (myStrlen(s2) + 1)]++;
            }
            i = j;
        }
    }
    for (int i = 0; i < n; i++) {
        mySubstr(s3, i * (myStrlen(s2) + 1), myStrlen(s2), s2);
        cout << s2 << ": " << d[i] << endl;
    }
}

int main() {
    char s[MAX];
    cin.getline(s,MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemTieng(s);
    return 0;
}

