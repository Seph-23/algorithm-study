#include <bits/stdc++.h>
using namespace std;

int arr[110][110][110];
int dist[110][110][110];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int n, m, h;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> m >> n >> h;
    queue<tuple<int, int, int>> Q;
    for(int k=0; k<h; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j][k];
                dist[i][j][k] = -1;
                if(arr[i][j][k] == -1) dist[i][j][k] = -99;
                else if(arr[i][j][k] > 0) {
                    dist[i][j][k] = 0;
                    Q.push({i, j, k});
                }
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        int curX, curY, curZ;
        tie(curX, curY, curZ) = cur;
        for(int dir=0; dir<6; dir++){
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if(arr[nx][ny][nz] == -1 || dist[nx][ny][nz] > 0 || arr[nx][ny][nz] > 0) continue;
            dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
            Q.push({nx, ny, nz});
        }
    }

    int mx = 0;
    for(int k=0; k<h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(dist[i][j][k] == -1){
                    cout << -1;
                    return 0;
                }
                mx = max(mx, dist[i][j][k]);
            }
        }
    }
    cout << mx;
}