#include <bits/stdc++.h>

using namespace std;

struct tg{
    float x;
    float y;
    float z;
    void nhap(){
        cin >> x >> y >> z;
    }
    int cv(){
        return x + y + z;
    }
    double dtich(){
        float p = cv()/2.0;
        return sqrt(p*(p-x)*(p-y)*(p-z));
    }
    void in(){
        if ((x + y > z) && (x + z > y) && (y + z > x)){
        cout << "Ba canh cua tam giac co do dai lan luot la: " << x << " " << y << " " << z << endl;
        cout << "Chu vi: " << cv() << endl;
        cout << "Dien tich: " << dtich() << endl;
        } else cout << "Khong phai la tam giac." << endl;
    }
};

int main(){
    tg tg1;
    tg1.nhap();
    tg1.in();
    return 0;
}