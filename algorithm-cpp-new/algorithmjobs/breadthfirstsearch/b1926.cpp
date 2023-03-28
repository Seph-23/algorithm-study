#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int vis[510][510];
int arr[510][510];
int n, m;

void bfs(){
    queue<pair<int, int>> Q;
    int mx=0, cnt=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){     //그림의 시작 지점을 찾는 2중 for
            if(arr[i][j] == 0 || vis[i][j]) continue;
            cnt++;                  //그림의 갯수 증가
            Q.push({i,j});
            vis[i][j] = 1;
            int area = 0;
            while(!Q.empty()){
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || arr[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << cnt << '\n' << mx;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];

    bfs();
}