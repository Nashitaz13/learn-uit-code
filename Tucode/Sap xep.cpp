#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    int je;
    int mmb;
    int swap;
    if (a > b){
        je = b;
        b = a;
        a = je;
    }
    if (a > c){
        swap = c;
        c = a;
        a = swap;
    }
    if (b > c){
        mmb = c;
        c = b;
        b = mmb;
    }
    cout << a << " " << b << " " << c;
    return 0;
}