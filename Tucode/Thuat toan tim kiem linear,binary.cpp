#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
//Linear search O(n)
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x)
            return true;
    }
    return false;
}
//Binary search O(logn)
//Cac phtu trong mang phai duoc sap xep tang dan hay giam dan
bool bs(int a[], int n, int x){
    int l = 0, r = n - 1;
    while (1 <= r){
        int m = (l + r) / 2; // l + (r - l)/2
        if (a[m] == x){
            return true;
        }
        // thang dung giua nho hon x, thi phai tim o ben phai, l = m +1
        else if (a[m] < x){
            l = m + 1;
        } // phai tim o ben trai, r = m - 1;
        else{
            r = m - 1;
        }
    }
    return false;
}
bool binary_search(int a[], int l, int r, int x){
    if (l > r)
        return false;
    int m = (l + r)/2;
    if (a[m] == x)
        return true;
    else if (a[m] < x){
        return binary_search(a, m + 1, r, x);
    }else return binary_search(a, l, m - 1, x);
}
int main(){
    int n, x;
    int a[n];
    cout << "Nhap n: " << endl;
    cin >> n;
    cout << "Nhap so can check: " << endl;
    cin >> x;
    for (int i = 0;i < n;i++){
        cin >> a[i];
    } 
    if (bs(a,n,x)){
        cout << "Found!\n";
    }
    else {
        cout << "Not Found!\n";
    }
    return 0;
}