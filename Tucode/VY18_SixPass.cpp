#include<bits/stdc++.h>
using namespace std;
// chưa đúng, chịu bài khó vãi l
struct Player {
    int efficiency;
    int stamina;
    int index;
};

bool compare(Player a, Player b) {
    return a.stamina > b.stamina;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<Player> players(n);
    for(int i = 0; i < n; i++) {
        cin >> players[i].efficiency >> players[i].stamina;
        players[i].index = i + 1;
    }

    sort(players.begin(), players.end(), compare);

    vector<int> dp(m+1, 0);
    vector<int> trace(m+1, 0);

    for(int i = 1; i <= n; i++) {
        for(int j = m; j >= players[i-1].stamina; j--) {
            if(dp[j] < dp[j - players[i-1].stamina] + players[i-1].efficiency) {
                dp[j] = dp[j - players[i-1].stamina] + players[i-1].efficiency;
                trace[j] = i;
            }
        }
    }

    cout << dp[m] << endl;

    vector<int> result;
    int j = m;
    while(j > 0) {
        result.push_back(players[trace[j]-1].index);
        j -= players[trace[j]-1].stamina;
    }

    for(int i = result.size()-1; i >= 0; i--) {
        cout << result[i] << " ";
    }

    return 0;
}
