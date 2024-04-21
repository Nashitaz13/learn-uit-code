#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main () {
    char str[100] = "Lop: Nhap mon lap trinh";
	char *str1;
	str1 = strstr(str, "lap");
	strncpy(str1, "LAP", 2);
	strcpy(str, "Chuc cac ban hoc thi tot");
	cout << str << endl;
	cout << str1 << endl;

    return 0;
}
