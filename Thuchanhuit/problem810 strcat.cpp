#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(const  char *s);
char * myStrcat( char * destination, const char * source);

int main() {
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	char* kq = myStrcat(s1, s2);
    if (kq == NULL) {
        cout << "Khong noi duoc. Khong du bo nho." << endl;
    } else {
        cout << kq << endl;
    }
    return 0;
}

int myStrlen(const char *s){
	int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char * myStrcat(char *destination, const char *source) {
    int len1 = myStrlen(destination);
    int len2 = myStrlen(source);
    if (len1 + len2 >= MAX) {
        return NULL;
    }
    for (int i = 0; i < len2; i++) {
        destination[len1 + i] = source[i];
    }
    destination[len1 + len2] = '\0';
    return destination;
}
