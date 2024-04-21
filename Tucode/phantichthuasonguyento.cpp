#include <iostream>
#include <math.h>
using namespace std;

void pt(int n){
    for (int i = 2; i <= sqrt(n);i++){
        while (n % i == 0){
            cout << i << " ";
            n /= i;
        }
        // in ra mot lan thi
        /*
        if(n % i == 0){
            n /= i;
        }
        */
    }
    if (n != 1){
        cout << n << endl;
    }
}

void pt2(int n){ //liet ke kem theo so mu
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0){
            int cnt = 0;
            while (n % i == 0){
                ++cnt;
                n /= i;
            }
            cout << i << "(" << cnt << ")" << " ";
        }
    }
    if (n != 1){
        cout << n << "(1)" << endl;
    }
}

void pt3(int n){ // them dau x vao giua cac snt : vd 8 -> 2x2x2
    for (int i = 2; i <= sqrt(n);i++){
        while (n % i == 0){
            cout << i;
            n /= i;
            if (n != 1) cout << "x";
        }
    }
    if (n != 1){
        cout << n << endl;
    }
}

void pt4(int n){ // kem theo dau mu va *
    cout << n << " = ";
    for (int i = 2; i < sqrt(n); i++){
        if (n % i ==0){
            int cnt = 0;
            while (n % i == 0){
                ++cnt;
                n /= i;
            }
            cout << i << "^" << cnt;
            if (n != 1)
                cout << "*";
        }
    }
    if (n != 1){
        cout << n << "^1" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pt(n);
    pt2(n);
    pt3(n);
    pt4(n);
    return 0;
}