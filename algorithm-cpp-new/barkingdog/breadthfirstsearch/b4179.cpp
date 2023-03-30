#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string arr[1010];
int dist1[1010][1010];  //불
int dist2[1010][1010];  //지훈지훈

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];

    queue<pair<int,int>> Q1;    //불
    queue<pair<int,int>> Q2;    //지훈
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            dist1[i][j] = -1;
            dist2[i][j] = -1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j] == 'J'){
                dist2[i][j] = 0;
                Q2.push({i, j});
            } else if (arr[i][j] == 'F'){
                dist1[i][j] = 0;
                Q1.push({i, j});
            }
        }
    }

    while (!Q1.empty()) {
        auto cur = Q1.front(); Q1.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(arr[nx][ny] == '#' || dist1[nx][ny] >= 0) continue;
            Q1.push({nx, ny});
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
        }
    }

    while(!Q2.empty()){
        auto cur = Q2.front(); Q2.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                cout << dist2[cur.X][cur.Y]+1;
                return 0;
            }
            if(arr[nx][ny] == '#' || dist2[nx][ny] >= 0) continue;
            if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y]+1) continue;
            Q2.push({nx, ny});
            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
        }
    }

    cout << "IMPOSSIBLE";
}