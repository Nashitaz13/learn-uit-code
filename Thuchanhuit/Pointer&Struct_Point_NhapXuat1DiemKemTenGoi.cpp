#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct Point {
    string tenDiem;
    int hoanhDo;
    int tungDo;
};

void Nhap(Point *&A) {
    A = new Point;
    getline(cin, A->tenDiem);
    cin >> A->hoanhDo >> A->tungDo;
}

void Xuat_InHoa_TenDiem(Point *A) {
    for (int i = 0; i < A->tenDiem.length(); i++) {
        A->tenDiem[i] = toupper(A->tenDiem[i]);
    }
    cout << A->tenDiem << "(" << A->hoanhDo << ", " << A->tungDo << ")";
}


int main() {
    Point *A;
    Nhap(A);
    Xuat_InHoa_TenDiem(A);
    return 0;
}

