#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;
    for(int t=0; t<T; t++){
        int n; cin >> n;
        int dist[310][310] = {0};
        int sx, sy; cin >> sx >> sy;
        int ex, ey; cin >> ex >> ey;
        for(int i=0; i<300; i++){
            for(int j=0; j<300; j++){
                dist[i][j] = -1;
            }
        }
        dist[ex][ey] = -99;
        queue<pair<int,int>> Q;
        Q.push({sx, sy});
        dist[sx][sy] = 0;
        while(dist[ex][ey]==-99){
            auto cur = Q.front(); Q.pop();
            for(int dir=0; dir<8; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if(dist[nx][ny]>0) continue;
                Q.push({nx, ny});
                dist[nx][ny] = dist[cur.X][cur.Y]+1;
            }
        }
        cout << dist[ex][ey] << '\n';
    }
}