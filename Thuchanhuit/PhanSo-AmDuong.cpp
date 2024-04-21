#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
	int tuso;
	int mauso;
};

void Nhap(PhanSo &A){
	cin >> A.tuso >> A.mauso;
}

void KiemTraAmDuong(PhanSo A){
	if ((A.mauso == 0 && A.tuso == 0) || (A.mauso == 0)) cout << "Khong thoa dieu kien phan so." << endl;
	if (A.tuso == 0 && A.mauso != 0) cout << "Bang 0" << endl;
	if (A.tuso * A.mauso < 0) cout << "So am" << endl;
	else if (A.tuso * A.mauso > 0) cout << "So duong" << endl;
}


int main() {
    PhanSo A;
    Nhap(A);
    KiemTraAmDuong(A);
    return 0;
}

