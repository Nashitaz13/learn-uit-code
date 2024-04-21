/*VIet chuong trinh khai bao lop sinh vien gom cac thong tin:
Ma SV, ho ten, lop, ngay sinh va gpa(dang float). Ham khoi tao
khong co tham so, ga'n cac gia tri thuoc tinh o trang thai mac dinh
(xau ki tu rong, gia tri so bang 0).
Doc thong tin 1 sinh vien tu ban phim(khong co ma SV) va in ra man hinh.
Trong do Ma SV duoc gan la B20DCCN001. Ngay sinh duoc chuan hoa ve dang
dd/mm/yyyy */
/* In: Gom 4 dong lan luot la ho ten, lop, ngay sinh va gpa
Trong do:
Ho ten khong qua 30 chu cai
Lop theo dung dinh dang thuong dung o PTIT
NGay sinh co du 3 phan ngay thang nam nhung co the chua dung chuan
*/


#include <bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string ma, ten, ns, lop;
        double gpa;
    public:
        SinhVien(){
            ma = ten = ns = "";
            gpa = 0;
        }
        SinhVien(string ten, string ns, double gpa){
            this->ten = ten;
            this->ns = ns;
            this->gpa = gpa;
        }
    friend void nhap(SinhVien&);
    friend void in(SinhVien);   
};
void nhap(SinhVien &a){
    a.ma = "B20DCCN001";
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
    if(a.ns[2] != '/') a.ns = "0" + a.ns;
    if(a.ns[5] != '/') a.ns.insert(3, "0");
}


/*Input: Bui Ngoc Thai D20CQCN04-B 1/3/2005 2
out: B2DCCN001 Bui Ngoc Thai D20CQCN04-B 1/3/2005 2.00
*/

void in(SinhVien a){
    cout << a.ma << " " << a.ten << a.lop << " " << a.ns << fixed << setprecision(2) << " " << a.gpa << endl;
}

#define a() a

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    
    return 0;
}
