#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int dist[110][110];
int arr[110][110];

int solution(vector<vector<int> > maps){
    int answer = 0;

    int n = maps.size() - 1;
    int m = maps[0].size() - 1;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            arr[i][j] = maps[i][j];
        }
    }

    for(int i=0; i<110; i++){
        for(int j=0; j<110; j++){
            dist [i][j] = -1;
        }
    }

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    dist[0][0] = 1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 | nx > n || ny < 0 || ny > m) continue;
            if(arr[nx][ny] == 0 || dist[nx][ny] != -1) continue;

            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }

    return answer = dist[n][m];
}