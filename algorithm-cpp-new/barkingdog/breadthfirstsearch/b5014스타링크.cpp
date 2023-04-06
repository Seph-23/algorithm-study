#include <bits/stdc++.h>
using namespace std;

int dist[1000010];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    for(int i=0; i<1000001; i++){
        dist[i] = -1;
    }
    queue<int> Q;
    Q.push(s);
    dist[s] = 0;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        for(auto nxt : {cur + u, cur - d}){
            if(nxt <= 0 || nxt > f) continue;
            if(dist[nxt] != -1) continue;
            Q.push(nxt);
            dist[nxt] = dist[cur] + 1;
        }
    }
    if(dist[g] != -1){
        cout << dist[g];
    } else {
        cout << "use the stairs";
    }
}