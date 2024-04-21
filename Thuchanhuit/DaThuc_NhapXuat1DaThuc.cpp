#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct DOnThuc {
    double heSo;
    int soMu;
};

struct DATHUC {
    DOnThuc cacDonThuc[100];
    int soDonThuc;
};

DATHUC* Nhap() {
    int n;
    cin >> n;
    DATHUC* B = new DATHUC;
    B->soDonThuc = 0;
    for (int i = 0; i < n; i++) {
        DOnThuc dt;
        cin >> dt.heSo >> dt.soMu;
        if (dt.heSo != 0) {
            B->cacDonThuc[B->soDonThuc] = dt;
            B->soDonThuc++;
        }
    }
    return B;
}

void Xuat(const DATHUC& B) {
    if (B.soDonThuc == 0) {
        cout << "0";
        return;
    }
    for (int i = 0; i < B.soDonThuc; i++) {
        if (i > 0 && B.cacDonThuc[i].heSo > 0) {
            cout << "+";
        }
        if (B.cacDonThuc[i].heSo == -1 && B.cacDonThuc[i].soMu != 0) {
            cout << "-";
        } else if (B.cacDonThuc[i].heSo != 1 || B.cacDonThuc[i].soMu == 0) {
            cout << B.cacDonThuc[i].heSo;
        }
        if (B.cacDonThuc[i].soMu > 0) {
            cout << "x";
            if (B.cacDonThuc[i].soMu > 1) {
                cout << "^" << B.cacDonThuc[i].soMu;
            }
        }
    }
}

double TinhDaThuc(const DATHUC& B, double x) {
    double result = 0;
    for (int i = 0; i < B.soDonThuc; i++) {
        result += B.cacDonThuc[i].heSo * pow(x, B.cacDonThuc[i].soMu);
    }
    return result;
}

int main() {
    DATHUC* B = Nhap();
    cout << "Da thuc vua nhap la: ";
    Xuat(*B);
    double x;
    cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}

