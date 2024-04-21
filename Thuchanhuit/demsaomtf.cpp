#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int m, n;
vector<string> sky;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n && sky[nx][ny] == '-' && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    int tc = 0;
    while(cin >> m >> n) {
        tc++;
        sky.resize(m);
        visited.assign(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            cin >> sky[i];
        }
        int stars = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (sky[i][j] == '-' && !visited[i][j]) {
                    dfs(i, j);
                    stars++;
                }
            }
        }
        cout << "Case " << tc << ": " << stars << endl;
    }
    return 0;
}

