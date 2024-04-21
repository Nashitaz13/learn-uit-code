#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long l = 1, r = 1e18, ans = -1;
    while(l <= r) {
        long long mid = (l + r) / 2;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            if(mid - i <= 0) break;
            sum += min(a[i], (mid - i) / n);
        }
        if(sum >= x) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
