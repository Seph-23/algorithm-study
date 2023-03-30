#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int T;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> T;
    for(int t=0; t<T; t++){
        int n, m, k;
        cin >> m >> n >> k;
        int arr[55][55] = {0};
        bool vis[55][55] = {0};
        int cnt = 0;

        for(int i=0; i<k; i++){
            int a, b; cin >> a >> b;
            arr[b][a] = 1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] || arr[i][j]==0) continue;
                queue<pair<int,int>> Q;
                cnt++;
                Q.push({i, j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(vis[nx][ny] || arr[nx][ny]==0) continue;
                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}