#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long solve(vector<int>& A) {
    long long result = 0;
    long long temp;
    for (int i = 1; i < A.size(); i++) {
        for (int j = 2*i ; j < A.size(); j += (i + 1)) {
            
                temp = ((A[i] % MOD) * (A[j] % MOD)) % MOD;
                result += temp;
            
        }
    }
    for (int i = 1; i < A.size(); i++){
    	result += A[0] * A[i];
	}
    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << solve(A) % MOD;
    return 0;
}

