#include<bits/stdc++.h>
using namespace std;
// Chưa đúng yêu cầu, cần hơi lâu để fix
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    int n, r, c, k;
    while (cin >> n >> r >> c >> k) {
        if (n == 0 && r == 0 && c == 0 && k == 0) break;
        vector<vector<int> > land(r, vector<int>(c));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> land[i][j];

        while (k--) {
            vector<vector<int> > newLand = land;
            for (int x = 0; x < r; x++) {
                for (int y = 0; y < c; y++) {
                    for (int d = 0; d < 4; d++) {
                        int nx = x + dx[d], ny = y + dy[d];
                        if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                            if ((land[x][y] + 1) % n == land[nx][ny]) {
                                newLand[nx][ny] = land[x][y];
                            }
                        }
                    }
                }
            }
            land = newLand;
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << land[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
