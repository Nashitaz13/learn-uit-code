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
class GiaoVien;
class Sinhvien;


class Sinhvien{
    friend class Giaovien;
    private:// de dam bao tinh chat dong goi
        string id, ten, ns;
        double gpa;
        // neu ko access modifier thi cac bien nay mac dinh la
        // private
        static int dem;
    public:
        Sinhvien(); //constructor ko co tham so
        Sinhvien(string, string ,string , double); //constructor
        void nhap();
        void in();
        friend void chuanhoa(Sinhvien&);
};

void chuanhoa(Sinhvien &a){
    string res = "";
    stringstream ss(a.ten);
    string token;
    while (ss >> token){
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
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
    cout << "Nhap id: "; cin >> this->id;
    cin.ignore();
    cout << "Nhap ten: "; getline(cin, this->ten);
    cout << "Nhap ns: "; cin >> this->ns;
    cout << "Nhap diem: "; cin >> this->gpa;
}

void Sinhvien::in(){
    cout << id << " " << ten << " " << ns << " " << fixed << setprecision(2) << gpa << endl;

}

class Giaovien{
    private:
        string khoa;
    public:
        void update(Sinhvien&);
};

void Giaovien::update(Sinhvien &x){
    x.gpa = 3.20;
}

int main(){
    Sinhvien x;
    x.nhap();
    chuanhoa(x);
    Giaovien y;
    y.update(x);
    x.in();
    return 0;
}