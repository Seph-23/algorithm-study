#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[110][110];
int vis[110][110];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int sz[100];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int m, n, k;
    cin >> m >> n >> k;
    for(int t=0; t<k; t++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                arr[i][j] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] || vis[i][j]) continue;
            queue<pair<int, int>> Q;
            Q.push({i, j});
            vis[i][j] = 1;
            cnt++;
            sz[cnt-1]++;
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || arr[nx][ny]) continue;
                    Q.push({nx, ny});
                    vis[nx][ny] = 1;
                    sz[cnt-1]++;
                }
            }
        }
    }
    cout << cnt << '\n';
    sort(sz, sz+cnt);
    for(int i=0; i<cnt; i++){
        cout << sz[i] << ' ';
    }
}