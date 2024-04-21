#include <iostream>

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    // Constructor có tham số
    NgayThangNam(int Nam, int Thang, int Ngay) {
        iNgay = Ngay;
        iThang = Thang;
        iNam = Nam;
    }

    // Phương thức tính số ngày trong năm
    int TinhNgay() const {
        int days_in_month[12] = {31, 28 + (iNam % 4 == 0 && (iNam % 100 != 0 || iNam % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = 0;
        for (int i = 0; i < iThang - 1; ++i) {
            days += days_in_month[i];
        }
        return days + iNgay;
    }
};

int main() {
    NgayThangNam ngay(2005, 12, 23);
    
    std::cout << "So ngay trong nam: " << ngay.TinhNgay() << std::endl;

    return 0;
}
