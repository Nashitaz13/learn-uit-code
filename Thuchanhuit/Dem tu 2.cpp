#include <iostream>
#include <cstring>
#define MAXN 200
int DemTuTrongChuoi(char str[]) {
    int count = 0;
    int len = strlen(str);
    bool inWord = false;

    for(int i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char s[MAXN];
    std::cin.getline(s, MAXN);
    std::cout << DemTuTrongChuoi(s);
    return 0;
}


