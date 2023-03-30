#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[510][510];
bool visited[510][510];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;
int cnt, mx;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==1 && visited[i][j]==0){
                queue<pair<int,int>> Q;
                cnt++;
                Q.push({i,j});
                visited[i][j]=1;
                int size=1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                        if(arr[nx][ny]==0 || visited[nx][ny]) continue;
                        size++;
                        Q.push({nx,ny});
                        visited[nx][ny]=1;
                    }
                }
                mx = max(size, mx);
            }
        }
    }
    cout << cnt << '\n' << mx;
}