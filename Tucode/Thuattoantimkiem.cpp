#include <bits/stdc++.h>
using namespace std;

//Linear Search O(n)
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            return true;
        }
    }
    return false;
}

//Binary search O(logn)
//Cac phan tu phai duoc sap xep tang dan, giam dan
bool bs(int a[], int n, int x){
    int l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2; // l + (r - l) / 2
        if (a[m] == x){
            return true;
        }
        // thang dung giua nho hon x, thi phai tim o ben phai, l = m + 1;
        else if (a[m] < x){
            l = m + 1;
        }
        // phai tim o ben trai, r = m - 1;
        else {
            r = m - 1;
        }
    }
    return false;
}

bool binary_search(int a[], int l, int r, int x){
    if (l > r){
        return false;
    }
    int m = (l + r) / 2;
    if (a[m] == x){
        return true;
    }
    else if (a[m] < x){
        return binary_search(a, m + 1, r, x);
    } else {
        return binary_search(a, l, m - 1, x);
    }
}

int first_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x ){
            res = m;
            // tim them o ben trai xem con ko :D ?
            r = m -1;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}

int last_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m;
            // tim them o ben phai
            l = m + 1;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int main(){
    int n, x; 
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
/*    if (ls(a, n, x)){
        cout << "Found!\n";
    } else{
        cout << "Not Found!\n";
    } */
 /*     if (bs(a, n, x)){
        cout << "Found!\n";
    } else{
        cout << "Not Found!\n";
    } */
/*      if (binary_search(a, 0,n - 1, x)){
        cout << "Found!\n";
    } else{
        cout << "Not Found!\n";
    } */
//binary_search(a + x, a + y, key) => a[x] = a[y - 1]
//binary_search(a + 1, a + 4, key)
/*
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    if (binary_search(v.begin(), v.end(), x)){
        cout << "Found!\n";
    } else {
        cout << "Not Found!\n";
    }
*/

    cout << first_pos(a, n ,x) << " " << last_pos(a, n, x) << endl;

    return 0;
}