#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
vector<pair<int,int>> event;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int s, t;
        cin >> s >> t;
        event.push_back({s, 1});
        event.push_back({t, -1});
    }
    sort(event.begin(), event.end());
    int ans = 0;
    int curtime = event[0].X;
    int cur = 0;
    int idx = 0;
    while(true){
        while(idx < 2*n && event[idx].X == curtime){
            cur += event[idx].Y;
            idx++;
        }
        ans = max(ans, cur);
        if(idx == 2*n) break;
        curtime = event[idx].X;
    }
    cout << ans << '\n';
}