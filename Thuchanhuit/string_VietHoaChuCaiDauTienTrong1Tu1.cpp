#include <iostream>
#include <cstring>
#include <cctype>
#define MAXN 500

void NormalizeString(char* str) {
    bool newWord = true;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == ' ') {
            newWord = true;
        } else if (newWord) {
            str[i] = toupper(str[i]);
            newWord = false;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

    
int main() {
    char s[MAXN];
    std::cin.getline(s, MAXN);
    NormalizeString(s);
    std::cout << s;
    return 0;
}