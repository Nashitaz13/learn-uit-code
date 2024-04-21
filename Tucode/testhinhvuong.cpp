#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Nh?p vào s? nguyên n (3= n =10): ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << n << "   ";
        }
        cout << "\n\n";
    }
    return 0;
}
