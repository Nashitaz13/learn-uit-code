#include <iostream>
using namespace std;
#define MAX 100

struct SinhVien{
    char HoTen[100];
    char NamSinh[20];
    float DiemToan;
};

void Nhap(SinhVien *&list1, int &n){
    list1 = new SinhVien[MAX];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin.getline(list1[i].HoTen, MAX);
        
		cin >> list1[i].NamSinh >> list1[i].DiemToan;
    }
}

void Xuat(SinhVien *list1, int n){
    for (int i = 0; i < n;i++){
        cout << list1[i].HoTen << " " << list1[i].NamSinh << " " << list1[i].DiemToan << endl;
    }
}

int main(){
    SinhVien *list1;
    int n;
    Nhap(list1,n);
    Xuat(list1,n);
    delete[] list1;
    return 0;
}
