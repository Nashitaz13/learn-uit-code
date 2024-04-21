#include <iostream>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);
int myStrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0' || s2[i] == '\0')
            break;
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return -1;
}

void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void StringReverse(char* s) {
    char* word_begin = s;
    char* temp = s; 

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(s, temp - 1);
}

int main() {
    char s[MAX];
    cin.getline(s, MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else {
        StringReverse(s);
        cout << s << endl;
    }
    return 0;
}

