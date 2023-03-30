#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string arr[110];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n;
int vis1[110][110];
int vis2[110][110];

//적록색아님 R,G,B
//적록색 RG, B
int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    queue<pair<int,int>> Q;
    //적록색 아닌 사람
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vis1[i][j]) continue;
            cnt1++;
            char a = arr[i][j];
            vis1[i][j] = 1;
            Q.push({i, j});
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(arr[nx][ny] != a || vis1[nx][ny]) continue;
                    Q.push({nx, ny});
                    vis1[nx][ny] = 1;
                }
            }
        }
    }
    //적록색인 사람
    int cnt2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vis2[i][j]) continue;
            cnt2++;
            char a = arr[i][j];
            vis2[i][j] = 1;
            Q.push({i, j});
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(vis2[nx][ny]) continue;
                    if(a == 'R' || a == 'G'){
                        if(arr[nx][ny] == 'B') continue;
                    } else if (a == 'B') {
                        if(arr[nx][ny] != 'B') continue;
                    }
                    Q.push({nx, ny});
                    vis2[nx][ny] = 1;
                }
            }
        }
    }

    cout << cnt1 << ' ' << cnt2;
}