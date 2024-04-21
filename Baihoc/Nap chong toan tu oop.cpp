#include <bits/stdc++.h>

using namespace std;

//class: lop
// thuoc tinh: atribute
//phuong thuc: method, behavior
//object: doi tuong

// encapsulation: dong goi
// Access modifier: Private, public, protected

//Constructor : ham khoi tao (cung ten voi ten class va khong co kieu tra ve)
//Destructor: ham huy
// This pointer
// setter getter
//static
//SV001 -> SV002 -> SV003
//Friend function, friend class
//forward declaration

//operator overloading
// << >>
// cout : ostream
// cin : istream

class Sinhvien{
    private:// de dam bao tinh chat dong goi
        string id, ten, ns;
        double gpa;
        // neu ko access modifier thi cac bien nay mac dinh la
        // private
        static int dem;
    public:
    
        friend istream& operator >> (istream &in, Sinhvien& a);
        friend ostream& operator << (ostream &out, Sinhvien a);
        // bool operator < (Sinhvien another);
        friend bool operator < (Sinhvien a, Sinhvien b);
};

// bool Sinhvien::operator < (Sinhvien a){
//     return this->gpa < a.gpa;
// }

bool operator < (Sinhvien a, Sinhvien b){
    return a.gpa < b.gpa;
}

istream& operator >> (istream &in, Sinhvien& a){
    cout << "Nhap id: ";
    in >> a.id;
    cout << "Nhap ten: "; cin.ignore();
    getline(in, a.ten);
    cout << "Nhap ngay sinh: "; in >> a.ns;
    cout << "Nhap diem: "; in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, Sinhvien a){
    cout << a.id << " " << a.ten << " " << a.ns << " "<< fixed << setprecision(2) << a.gpa << endl;
    return out;
}


int main(){
    int n; cin >> n;
    Sinhvien a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    // Sinhvien x,y;
    // cin >> x >> y;
    // if(x<y) cout << "Yes";
    // else cout << "No";
    return 0;
}