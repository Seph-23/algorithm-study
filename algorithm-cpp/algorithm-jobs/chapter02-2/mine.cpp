#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, m, x, y;
    int arr[110][110] = {0};
    int ans;

    cin >> n >> m >> x >> y;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    //지뢰 클릭하면 game over
    if (arr[x][y] == 1) {
        cout << "game over";
    } else {
        ans = 0;
        ans += arr[x - 1][y - 1];
        ans += arr[x - 1][y];
        ans += arr[x - 1][y + 1];
        ans += arr[x][y - 1];
        ans += arr[x][y + 1];
        ans += arr[x + 1][y - 1];
        ans += arr[x + 1][y];
        ans += arr[x + 1][y + 1];
        cout << ans;
    }
}