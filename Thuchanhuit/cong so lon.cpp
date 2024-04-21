#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct SOLON {
    string value;
};

void input(SOLON &a) {
    cin >> a.value;
}

void output(SOLON a) {
    cout << a.value << endl;
}

SOLON Cong(SOLON a, SOLON b) {
    while (a.value.size() < b.value.size()) a.value = '0' + a.value;
    while (b.value.size() < a.value.size()) b.value = '0' + b.value;
    int carry = 0;
    for (int i = a.value.size() - 1; i >= 0; i--) {
        int tmp = a.value[i] - '0' + b.value[i] - '0' + carry;
        carry = tmp / 10;
        a.value[i] = tmp % 10 + '0';
    }
    if (carry > 0) a.value = '1' + a.value;
    return a;
}

int main() {
    SOLON a, b, S;
    input(a);
    input(b);
    S = Cong(a, b);
    output(a);
    output(b);
    output(S);
    return 0;
}

