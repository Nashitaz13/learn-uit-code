#include<iostream>
using namespace std;

void input(int &angle) {
    cin >> angle;
}

int GocPhanTuLuongGiac(int angle) {
    angle = angle % 360;
    if (angle < 0) {
        angle += 360;
    }

    // Xác d?nh góc ph?n tu
    if (angle >= 0 && angle < 90) {
        return 1;
    } else if (angle >= 90 && angle < 180) {
        return 2;
    } else if (angle >= 180 && angle < 270) {
        return 3;
    } else {
        return 4;
    }
}

void output(int result) {
    cout << result;
}

int main() {
    int angle;
    input(angle);
    output(GocPhanTuLuongGiac(angle));
    return 0;
}

