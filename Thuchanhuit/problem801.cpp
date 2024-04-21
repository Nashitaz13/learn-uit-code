
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main(){
    char str[MAX];
    cin.getline(str, MAX);
    int check = 0;
    for (int i = 0; str[i] != 0; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            check = 1;
        }
    }
    if (check == 1){
        cout << "CHUOI KHONG HOP LE." << endl;
    } else {
        cout << str << endl;
    }
    return 0;
}