#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void XoaKhoangTrangDu_TruocDauCham(char *s);

int main() {
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << endl;
	char s1[MAX];
	strcpy(s1, s);
	XoaKhoangTrangDu_TruocDauCham(s1);
	cout << s1 << endl;
	return 0;
}

void XoaKhoangTrangDu_TruocDauCham(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ' && s[i+1] == '.') {
            while (s[i] == ' ' && i >= 0) {
                for (int j = i; j < n; j++) {
                    s[j] = s[j+1];
                }
                i--;
                n--;
            }
        }
    }
}
/*
Đầu tiên, nó lấy độ dài của chuỗi đầu vào.
Sau đó, nó lặp qua từng ký tự trong chuỗi. Nếu ký tự hiện tại là một khoảng trắng và ký tự tiếp theo là dấu chấm, nó bắt đầu một vòng lặp khác.
Trong vòng lặp này, nó tiếp tục di chuyển ngược lại qua chuỗi cho đến khi nó gặp một ký tự không phải là khoảng trắng hoặc nó đã đến đầu chuỗi.
Đối với mỗi khoảng trắng mà nó gặp phải, nó dịch chuyển tất cả các ký tự phía sau về phía trước một vị trí, do đó xóa khoảng trắng đó.
Cuối cùng, nó giảm biến đếm i và n (độ dài chuỗi) xuống một để phản ánh việc một khoảng trắng đã bị xóa.
*/



