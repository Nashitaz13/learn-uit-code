#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(const char *s1, const char *s2);

int main() {
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrcmp(const char *s1, const char *s2) {
    while(*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    if (*(const unsigned char*)s1 < *(const unsigned char*)s2) {
        return -1;
    } else if (*(const unsigned char*)s1 > *(const unsigned char*)s2) {
        return 1;
    }
    return 0;
}

