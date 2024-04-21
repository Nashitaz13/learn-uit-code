#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Nhap n hang va m cot ";
    cin >> n >> m;
    // Khai báo con trỏ cấp 2 arr
    int** arr;
    
    // Cấp phát vùng nhớ động cho mảng 1 chiều các con trỏ kiểu int*
    // Có thể hiểu arr là mảng n phần tới với mỗi phần tử là một con trỏ kiểu int*
    arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    // Nhập dữ liệu cho các phần tử trong mảng
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
       }
    }
    // Tính tổng từng hàng và hiển thị ra màn hình
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        cout << sum << '\n';
    }
    // Giải phóng bộ nhớ
    for (int i = 0; i < n; i++){
        delete[] arr[i]; // Giải phóng bộ nhớ con của mảng 1 chiều
    }
    // Giải phóng bộ nhớ cho mảng con trỏ
    delete[]arr;
    return 0;
}