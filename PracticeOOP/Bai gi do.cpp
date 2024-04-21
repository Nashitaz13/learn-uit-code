#include <iostream>

using namespace std;


class ThoiDiem {
private: 
	int Gio, Phut, Giay;

	int SoGiay() {
		return Gio * 3600 + Phut * 60 + Giay;
	}
public: 
	ThoiDiem() {
		Gio = 0;
		Phut = 0;
		Giay = 0;
	}
	ThoiDiem(int gio, int p, int g) {
		Gio = gio;
		Phut = p;
		Giay = g;
	}

	void Nhap() {
		cout << "Gio: "; cin >> Gio;
		cout << "Phut: "; cin >> Phut;
		cout << "Giay: "; cin >> Giay;
	}

	void Xuat() {
		cout << Gio << ":" << Phut << ":" << Giay << endl;
	}

	int KhoangCach(ThoiDiem& t) {
		return abs(SoGiay() - t.SoGiay());
	}

	ThoiDiem Cong(int d) {
		int ss = SoGiay() + d;
		return ThoiDiem(ss / 3600, ss % 3600 / 60, ss % 60);
	}

	bool NhoHon(ThoiDiem& t) {
		return SoGiay() < t.SoGiay();
	}
};

class LichHoc {
	ThoiDiem BatDau;
	ThoiDiem KetThuc;
	char* MaSoMonHoc;
public: 
	LichHoc() {
		MaSoMonHoc = new char[256];
	}
	void Nhap() {
		bool valid = false;
		while (!valid) {
			cout << "Bat dau" << endl; BatDau.Nhap();
			cout << "Ket thuc" << endl; KetThuc.Nhap();
			valid = BatDau.NhoHon(KetThuc);
			if (!valid) {
				cout << "ERROR Gio bat dau phai nho hon gio ket thuc" << endl;
			}
		}
		

		cout << "Ma so mon hoc: "; cin >> MaSoMonHoc;
	}
	void Xuat() {
		cout << MaSoMonHoc << ": ";
		BatDau.Xuat();
		KetThuc.Xuat();
	}

	bool Trung(LichHoc& lh) {
		return !(lh.KetThuc.NhoHon(BatDau) || KetThuc.NhoHon(lh.BatDau)  );
	}

	~LichHoc() {
		delete MaSoMonHoc;
	}
};


int main(int) {

	LichHoc lh1, lh2;
	cout << "Nhap lich hoc 1 : " << endl;
	lh1.Nhap();

	cout << "Nhap lich hoc 2 : " << endl;
	lh2.Nhap();

	if (lh1.Trung(lh2)) {
		cout << "Trung" << endl;
	}
	else
		cout << "Khong trung" << endl;


}


//
// TODO : new/delete, destructor, DoanThang, TamGiac, object pointer array
// 
