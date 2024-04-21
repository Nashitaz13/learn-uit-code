#include<iostream>
using namespace std;

struct DonThuc {
    double heSo;
    int soMu;
};

struct DATHUC {
    DonThuc cacDonThuc[100];
    int soDonThuc;
};

DATHUC* Nhap() {
    DATHUC* daThuc = new DATHUC;
    cin >> daThuc->soDonThuc;
    for (int i = 0; i < daThuc->soDonThuc; i++) {
        cin >> daThuc->cacDonThuc[i].heSo >> daThuc->cacDonThuc[i].soMu;
    }
    return daThuc;
}

void Xuat(DATHUC daThuc) {
    bool first = true;
    for (int i = 0; i < daThuc.soDonThuc; i++) {
        if (daThuc.cacDonThuc[i].heSo == 0) continue;
        if (daThuc.cacDonThuc[i].heSo > 0 && !first) cout << "+";
        if (daThuc.cacDonThuc[i].heSo == -1 && daThuc.cacDonThuc[i].soMu != 0) cout << "-";
        else if (daThuc.cacDonThuc[i].heSo != 1 || daThuc.cacDonThuc[i].soMu == 0) cout << daThuc.cacDonThuc[i].heSo;
        if (daThuc.cacDonThuc[i].soMu != 0) cout << "x";
        if (daThuc.cacDonThuc[i].soMu > 1) cout << "^" << daThuc.cacDonThuc[i].soMu;
        first = false;
    }
    if (first) cout << "0";
}

void Xuat(DATHUC* daThuc) {
    bool first = true;
    for (int i = 0; i < daThuc->soDonThuc; i++) {
        if (daThuc->cacDonThuc[i].heSo == 0) continue;
        if (daThuc->cacDonThuc[i].heSo > 0 && !first) cout << "+";
        if (daThuc->cacDonThuc[i].heSo == -1 && daThuc->cacDonThuc[i].soMu != 0) cout << "-";
        else if (daThuc->cacDonThuc[i].heSo != 1 || daThuc->cacDonThuc[i].soMu == 0) cout << daThuc->cacDonThuc[i].heSo;
        if (daThuc->cacDonThuc[i].soMu != 0) cout << "x";
        if (daThuc->cacDonThuc[i].soMu > 1) cout << "^" << daThuc->cacDonThuc[i].soMu;
        first = false;
    }
    if (first) cout << "0";
}


DATHUC* Tong2DaThuc(DATHUC* A, DATHUC* B) {
    DATHUC* tong = new DATHUC;
    tong->soDonThuc = 0;
    int i = 0, j = 0;
    while (i < A->soDonThuc && j < B->soDonThuc) {
        if (A->cacDonThuc[i].soMu > B->cacDonThuc[j].soMu) {
            tong->cacDonThuc[tong->soDonThuc] = A->cacDonThuc[i];
            i++;
        } else if (A->cacDonThuc[i].soMu < B->cacDonThuc[j].soMu) {
            tong->cacDonThuc[tong->soDonThuc] = B->cacDonThuc[j];
            j++;
        } else {
            tong->cacDonThuc[tong->soDonThuc] = A->cacDonThuc[i];
            tong->cacDonThuc[tong->soDonThuc].heSo += B->cacDonThuc[j].heSo;
            i++; j++;
        }
        if (tong->cacDonThuc[tong->soDonThuc].heSo != 0) tong->soDonThuc++;
    }
    while (i < A->soDonThuc) {
        tong->cacDonThuc[tong->soDonThuc] = A->cacDonThuc[i];
        i++; tong->soDonThuc++;
    }
    while (j < B->soDonThuc) {
        tong->cacDonThuc[tong->soDonThuc] = B->cacDonThuc[j];
        j++; tong->soDonThuc++;
    }
    return tong;
}

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}

