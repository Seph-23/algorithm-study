#include <bits/stdc++.h>
using namespace std;

int dist[100010];
int n, k;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> k;

    for(int i=0; i<100010; i++) dist[i] = -1;

    queue<int> Q;
    Q.push(n);
    dist[n] = 0;
    while(dist[k] == -1){
        int cur = Q.front(); Q.pop();
        for(auto nxt : {cur-1, cur+1, cur*2}){
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[k];
}