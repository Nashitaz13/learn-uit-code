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

//SV001 -> SV002 -> SV003

class Sinhvien{
    private:// de dam bao tinh chat dong goi
        string id, ten, ns;
        double gpa;
        // neu ko access modifier thi cac bien nay mac dinh la
        // private
        static int dem;
    public:
        Sinhvien(); //constructor ko co tham so
        Sinhvien(string, string ,string , double); //constructor
        // void xinchao();
        // void dihoc();
        void nhap();
        void in();
        void tangDem();
        int getDem();
};

int Sinhvien::dem = 0;
//Implementation

void Sinhvien::tangDem(){
    ++dem;
}

int Sinhvien::getDem(){
    return dem;
}
    

Sinhvien::Sinhvien(string id, string ten, string ns, double gpa){    
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}


Sinhvien::Sinhvien(){
    //cout << "Doi tuong mac dinh duoc tao o day \n";
    id = ten = ns = "";
    gpa = 0;
}

void Sinhvien::nhap(){
    ++dem;
    this->id = "SV" + string(3- to_string(dem).length(), '0') + to_string(dem);
    //dem = 1 => "1"
    cout << "Nhap ten: "; getline(cin, this->ten);
    cout << "Nhap ns: "; cin >> this->ns;
    cout << "Nhap diem: "; cin >> this->gpa;
    cin.ignore();
}

void Sinhvien::in(){
    cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;

}


int main(){
    Sinhvien x;
    // x.tangDem(); // dem = 1
    // x.tangDem(); // dem = 2
    // Sinhvien y;
    // cout << y.getDem() << endl;
    // y.tangDem();
    x.nhap();
    x.in();
    return 0;
}