#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[1010][1010];
int dist[1010][1010];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int m,n;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> m >> n;

    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            dist[i][j] = -1;
            if(arr[i][j] > 0) {
                Q.push({i, j});
                dist[i][j] = 0;
            } else if(arr[i][j] == -1){
                dist[i][j] = -99;
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(arr[nx][ny]==-1 || dist[nx][ny]>0 || arr[nx][ny]>0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx, ny});
        }
    }

    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dist[i][j]==-1){
                cout << -1;
                return 0;
            }
            mx = max(mx, dist[i][j]);
        }
    }
    cout << mx;
}