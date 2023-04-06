#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[110][110];
int arr2[110][110];
bool vis[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;
    int maxlimit=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
            maxlimit = max(arr[i][j], maxlimit);
        }
    }

    int mx = 0;
    for(int t=0; t<maxlimit; t++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                arr2[i][j] = 0;
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(arr[i][j] <= t) arr2[i][j] = -99;       //잠긴곳
                else arr2[i][j] = 1;                    //안잠긴곳
            }
        }
         for(int i=0; i<N; i++){
             for(int j=0; j<N; j++){
                 vis[i][j] = false;
             }
         }
        int cnt = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(arr2[i][j] != 1 || vis[i][j]) continue;
                cnt++;
                queue<pair<int, int>> Q;
                Q.push({i, j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] || arr2[nx][ny] != 1) continue;
                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
            }
            mx = max(cnt, mx);
        }
    }
    cout << mx;
}