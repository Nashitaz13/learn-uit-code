#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
double a[MAX], pre[MAX];

bool check(int n, int m, double mid) {
    for (int i = 0; i < n; i++) {
        pre[i] = a[i] - mid;
        if (i) pre[i] += pre[i - 1];
    }
    if (pre[m - 1] >= 0) return true;
    double mini = 0;
    for (int i = m; i < n; i++) {
        mini = min(mini, pre[i - m]);
        if (pre[i] - mini >= 0) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] /= 100.0;
    }
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n; i++) {
        a[i + n] = a[i] + 360.0;
    }
    int m = n + 1;
    n = 2 * n;
    double l = 0, r = 360.0, mid;
    for (int i = 0; i < 100; i++) {
        mid = (l + r) / 2.0;
        if (check(n, m, mid)) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(9) << l * 100 << "\n";
    return 0;
}

