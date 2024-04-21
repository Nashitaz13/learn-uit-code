#include <bits/stdc++.h>
using namespace std;

int UCLN1(int &a, int &b){
    while (a!=b){
        if (a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a; // a va b deu dc vi bang nhau r 
}
int UCLN2(int &a, int &b){
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    if (max % min == 0){
        return min;
    } else {
        for (int i = min / 2; i >= 1; i--){
            if (max % i == 0 && min % i == 0){
                return i;
                break;
            }
        }
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << UCLN1(x,y) << endl;
    int m,n;
    cin >> m >> n;
    cout << UCLN2(m,n) << endl;
    return 0;
}