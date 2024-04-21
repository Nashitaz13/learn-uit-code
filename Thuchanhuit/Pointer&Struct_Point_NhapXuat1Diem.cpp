#include <bits/stdc++.h>

struct Point{
	int x;
	int y;
};

void Nhap(Point *&A){
	A = new Point;
	std::cin >> A->x >> A->y;
}

Point* Nhap(){
	Point *B = new Point;
	std::cin >> B->x >> B->y;
	return B;
}

void Xuat(Point *A){
	std::cout << "(" << A->x << ", " << A->y << ")";
}

int main() {
    Point *A, *B;
    Nhap(A);
    B = Nhap();
    Xuat(A);
    std::cout << " and ";
    Xuat(B);
    return 0;
}

