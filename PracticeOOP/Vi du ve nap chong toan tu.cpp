#include <iostream>
using namespace std;

class ThoiGian
{
public:
    int hour;       
    int minute;
public:
    ThoiGian() : hour(0), minute(0) {}  //ham tao mac dinh
    ThoiGian(int h, int m) : hour(h) , minute(m) {} // ham tao 2 tham so
    ThoiGian operator++ () // ham nap chong 2 toan tu tien to
    {
        ++minute;        
        if (minute >= 60)
        {
            ++hour;
            minute -= 60;
        }
        return ThoiGian(hour, minute);
    }
    ThoiGian operator++(int) //ham nap chong 2 toan tu hau to
    {
        ThoiGian T(hour, minute);
        ++minute;         
        if (minute >= 60)
        {
            ++hour;
            minute -= 60;
        }
        return T;
    }
    ThoiGian operator +(ThoiGian& Ts) //nap chong toan tu 1 ngoi
    {
        ThoiGian T;
        T.hour = this->hour + Ts.hour;
        T.minute = this->minute + Ts.minute;
        if (T.minute >= 60)
        {
            ++T.hour;
            T.minute -= 60;
        }
        return T;
    }
// n?p ch?ng to�n t? - hai ng�i
    friend ThoiGian operator - (ThoiGian& T1, ThoiGian& T2) 
    {
        ThoiGian T;
        T.hour = T1.hour - T2.hour;
        T.minute = T1.minute - T2.minute;
        return T;
    }
    friend istream& operator >> (istream& is, ThoiGian& T) 
    {
        cout << "hour = ";
        is >> T.hour;
        cout << "minute = ";
        is >> T.minute;
        return is;
    }
    friend ostream& operator << (ostream& os, ThoiGian& T) 
    {
        os << T.hour << "h:" << T.minute << "p" << endl;
        return os;
    }
    friend bool operator < (ThoiGian& T1, ThoiGian& T2)
    {
        if (T1.hour == T2.hour)
        {
            if (T1.minute < T2.minute)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if(T1.hour < T2.hour)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    ThoiGian T1(8, 59), T2(6, 24);
    ThoiGian T3;
    T3 = T1 + T2;  //test n?p ch?ng to�n t? +
    cout << "Thoi gian hien tai cua T3 la: ";
    cout << T3; //test to�n t? xu?t <<
    if (T3++.minute == 24) //test n?p ch?ng to�n t? ++ h?u t?
    {
        cout << "Hau to false" << endl;
        cout << T3;
    }
    else
    {
        cout << "Hau to true" << endl;
    }
    cout << "Thoi gian sau khi thuc hien phep toan ++ hau to la: ";
    cout << T3;
    cout << "Thoi gian hien tai cua T3 la: ";
    cout << T3;
    if (++T3.minute == 25) //test n?p ch?ng to�n t? ++ ti?n t?
    {
        cout << "Tien to true" << endl;
    }
    else
    {
        cout << "Tien to false" << endl;
        cout << T3;
    }
    cout << "Thoi gian sau khi thuc hien phep toan ++ tien to la: ";
    cout << T3;
    ThoiGian T4; 
    T4 = T1 - T2; // test n?p ch?ng to�n t? - hai ng�i
    cout << "Thong tin T4 ";
    cout << T4;
    ThoiGian T5;
    cout << "Nhap thong tin T5" << endl;
    cin >> T5; // test n?p ch?ng to�n t? nh?p >>
    cout << "Thong tin vua nhap la: ";
    cout << T5;
    if (T5 < T4)
    {
        cout << "T5 < T4" << endl;
    }
    else
    {
        cout << "T5 > T4" << endl;
    }
    return 0;
}
