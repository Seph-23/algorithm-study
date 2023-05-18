#include <bits/stdc++.h>

#define MAX 100

using namespace std;

int r, c;
int dirX[4] = {-1, 1, 0, 0};
int dirY[4] = {0, 0, -1, 1};

int getMinTime(int sx, int sy, int dx, int dy, vector<string> maps) {
    queue<pair<pair<int, int>, int>> q;
    bool visited[MAX][MAX] = {0, };
    int time = 2147000000;

    q.push({{sx, sy}, 0});
    visited[sx][sy] = true;

    while(!q.empty()) {
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int acc_time = q.front().second;
        q.pop();

        // 도착 지점에 도달하면 최소 시간으로 갱신
        if (cx == dx && cy == dy) {
            time = min(time, acc_time);
        }

        for (int i=0; i<4; i++) {
            int nx = cx + dirX[i];
            int ny = cy + dirY[i];

            if (nx < 0 || r <= nx || ny < 0 || c <= ny) continue;
            if (visited[nx][ny] || maps[nx][ny] == 'X') continue;

            q.push({{nx, ny}, acc_time + 1});
            visited[nx][ny] = true;
        }
    }

    return time == 2147000000 ? 0 : time;
}

int solution(vector<string> maps) {
    pair<int, int> start;
    pair<int, int> laber;
    pair<int, int> dest;

    r = maps.size();
    c = maps[0].length();

    int findCount = 0;

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (findCount == 3) break;

            if (maps[i][j] == 'S') {
                start = { i, j };
                findCount++;
            } else if (maps[i][j] == 'L') {
                laber = { i, j };
                findCount++;
            } else if (maps[i][j] == 'E') {
                dest = { i, j };
                findCount++;
            }
        }
    }

    int startToLaber = getMinTime(start.first, start.second, laber.first, laber.second, maps);
    int LaberToDest = startToLaber ? getMinTime(laber.first, laber.second, dest.first, dest.second, maps) : -1;

    // 레버를 찾을 수 없거나, 미로를 탈출할 수 없다면 -1 반환
    return (LaberToDest == -1 || !LaberToDest) ? -1 : startToLaber + LaberToDest;
}