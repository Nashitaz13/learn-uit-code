#include <bits/stdc++.h>

using namespace std;

struct Hcn{
    int dai;
    int rong;

    void nhap(){
    cin >> dai >> rong;
}
    int dtich(){
        return dai * rong;
    }
    int cv(){
        return 2*(dai + rong);
    }
    void in(){
        cout << "Chieu dai: " << dai << endl;
        cout << "Chieu rong: " << rong << endl;
        cout << "Chu vi: " << cv() << endl;
        cout << "Dien tich: " << dtich() << endl;
    }
};

// int s(Hcn hinh){
//     return hinh.dai * hinh.rong;
// }

// int cv(Hcn hinh2){
//     return (hinh2.dai + hinh2.rong)*2;
// }


int main(){
    Hcn hcn;
    hcn.nhap();
    hcn.in();
    // cin >> hinhcn.dai >> hinhcn.rong;
    // double cv = (cd+cr) * 2;
    // double dtich = cd*cr;
    // cout << "Chu vi la: " << cv << endl;
    // cout << "Dien tich la: "  << dtich << endl;
    // cout << "cdai: " << hinhcn.dai << endl;
    // cout << "crong: " << hinhcn.rong << endl;
    // cout << "Dien tich la: " << s(hinhcn) << endl;
    // cout << "Chu vi la: " << cv(hinhcn) << endl;
    // inhcn(hinhcn);
    return 0;
}