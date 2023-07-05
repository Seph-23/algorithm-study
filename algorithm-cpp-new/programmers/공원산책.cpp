#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    pii nowDir;

    // get Start Dir
    for (int i = 0; i < park.size(); i++) {
        for (int j = 0; j < park[i].size(); j++) {
            if (park[i][j] == 'S') nowDir = make_pair(i, j);
        }
    }

    // ck Routes
    for (int k = 0; k < routes.size(); k++) {
        char dir = routes[k][0];
        int dist  = routes[k][2] - '0';
        int dirY = 0, dirX = 0;

        switch (dir) {
            case 'E':
                dirX = 1;
                break;
            case 'W':
                dirX = -1;
                break;
            case 'S':
                dirY = 1;
                break;
            case 'N':
                dirY = -1;
                break;
        };

        if ((nowDir.first + (dirY * dist) < park.size() && nowDir.first + (dirY * dist) >= 0) && (nowDir.second + (dirX * dist) < park[0].size() && nowDir.second + (dirX * dist) >= 0)) {
            int j;
            for (j = 1 ; j <= dist; j++) {
                if (park[nowDir.first + (dirY * j)][nowDir.second + (dirX * j)] == 'X') break;
            }

            if (j > dist) {
                nowDir.first += (dirY * dist);
                nowDir.second += (dirX * dist);
            }
        }
    }

    answer = {nowDir.first, nowDir.second};
    return answer;
}