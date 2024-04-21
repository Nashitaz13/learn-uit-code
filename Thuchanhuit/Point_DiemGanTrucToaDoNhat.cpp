#include <iostream>
#include <cmath>
#define MAXN 100
struct Point {
    int x;
    int y;
};

void Nhap(Point points[], int &n) {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }
}

Point DiemGanGocToaDoNhat(Point points[], int n) {
    int minIndex = 0;
    double minkc = sqrt(pow(points[0].x, 2) + pow(points[0].y, 2));
    for (int i = 1; i < n; ++i) {
        double kc = sqrt(pow(points[i].x, 2) + pow(points[i].y, 2));
        if (kc < minkc) {
            minkc = kc;
            minIndex = i;
        }
    }
    return points[minIndex];
}

void Xuat(Point point) {
    std::cout << "(" << point.x << ", " << point.y << ")";
}

int main() {
    Point points[MAXN];
    int n;
    Nhap(points, n);
    std::cout << "Diem gan goc toa do nhat la: ";
    Xuat(DiemGanGocToaDoNhat(points, n));
    return 0;
}

