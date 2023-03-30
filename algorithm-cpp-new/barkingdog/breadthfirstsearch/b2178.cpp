#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string arr[110];
int dist[110][110];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];

    queue<pair<int,int>> Q;
    dist[0][0] = 1;
    Q.push({0, 0});
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(arr[nx][ny]=='0' || dist[nx][ny]>0) continue;
            dist[nx][ny]=dist[cur.X][cur.Y]+1;
            Q.push({nx,ny});
        }
    }
    cout << dist[n-1][m-1];
}