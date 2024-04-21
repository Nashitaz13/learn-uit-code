#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

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

    cout << "So tu trong chuoi la: " << count << endl;

    return 0;
}
