#include <iostream>
using namespace std;
int main(){
    int arr[] = { 1, 2, 3, 4, 5 };
    int *p = &arr[0];
    for (int i = 0; i < 5; i++){
        cout << *(p + i) << " ";    
    }
    return 0;
}