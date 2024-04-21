#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m = arr.size();

    selectionSort(arr);

    cout << m << endl;
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    return 0;
}
