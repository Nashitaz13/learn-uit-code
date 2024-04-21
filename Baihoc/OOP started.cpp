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
class Sinhvien{
    private:// de dam bao tinh chat dong goi
        string id, ten, ns;
        double gpa;
        // neu ko access modifier thi cac bien nay mac dinh la
        // private
    public:
        Sinhvien(); //constructor ko co tham so
        Sinhvien(string, string ,string , double); //constructor
        // void xinchao();
        // void dihoc();
        void nhap();
        void in();
        double getGpa();
        string getId();
        string getName();
        string getNs();
        void setGpa(double);
        ~Sinhvien(); // ham huy (se dc goi khi doi tuong cua ban ket thuc)

};

//Implementation

// Sinhvien::Sinhvien(string ma, string name, string birth, double diem){
//     id = ma;
//     ten = name;
//     ns = birth;
//     gpa = diem;
// }
Sinhvien::Sinhvien(string id, string ten, string ns, double gpa){    
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}

Sinhvien::~Sinhvien(){
    //cout << "Doi tuong duoc huy tai day \n";
}

Sinhvien::Sinhvien(){
    //cout << "Doi tuong mac dinh duoc tao o day \n";
    id = ten = ns = "";
    gpa = 0;
}

// void Sinhvien::nhap(){
//     cout << "Nhap id: "; cin >> id;
//     cin.ignore();
//     cout << "Nhap ten: "; getline(cin, ten);
//     cout << "Nhap ns: "; cin >> ns;
//     cout << "Nhap diem: "; cin >> gpa;
// }

void Sinhvien::nhap(){
    cout << "Nhap id: "; cin >> this->id;
    cin.ignore();
    cout << "Nhap ten: "; getline(cin, this->ten);
    cout << "Nhap ns: "; cin >> this->ns;
    cout << "Nhap diem: "; cin >> this->gpa;
}

void Sinhvien::in(){
    cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;

}

double Sinhvien::getGpa(){
    return this->gpa;   //return gpa;
}

void Sinhvien::setGpa(double gpa){
    this->gpa = gpa;
}

bool cmp(Sinhvien a, Sinhvien b){
    return a.getGpa() > b.getGpa();
}

// void Sinhvien::xinchao(){
//     cout << "xin chao" << endl;
// }

// void Sinhvien::dihoc(){
//     cout << "di hoc" << endl;
// }
// id, ten, ns k truy cap duoc do no private

void abc(){
    Sinhvien x;
}

int main(){
    // abc();
    // // Sinhvien x;
    // // Sinhvien x("123", "Ng Van A", "23/12/2024", 3.14);
    // // if (1){
    // //     Sinhvien x;
    // // }
    // // x.dihoc();
    // // x.xinchao();

    // Sinhvien x;
    // x.nhap();
    // x.in();

    int n; cin >> n;
    Sinhvien a[100];
    for (int i = 0; i < n; i++){
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        a[i].in();
    }
    return 0;
}