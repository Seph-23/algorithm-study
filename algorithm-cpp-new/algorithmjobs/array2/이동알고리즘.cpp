#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int arr[110][110];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, y;
    cin >> n >> m >> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    x=0; y=0;
    int nx, ny, dir, dist;
    while(q--){
        cin >> dir >> dist;
        for(int i=0; i<dist; i++){
            nx = x + dx[dir];
            ny = y + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) break;
            if(arr[nx][ny] == -1) break;
            x = nx;
            y = ny;
        }
        cout << arr[x][y] << '\n';
    }
}