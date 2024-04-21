#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void StringReverse(char *s) {
    char *word_begin = s;
    char *temp = s; 

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        } else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(s, temp - 1);
}


int main() {
    char s[MAX];
    gets(s);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else {
        StringReverse(s);
        cout << s << endl;
    }
    return 0;
}

