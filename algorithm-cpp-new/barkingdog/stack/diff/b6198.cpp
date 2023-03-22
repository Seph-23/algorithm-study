#include <bits/stdc++.h>
using namespace std;

int n;
long long ans;
stack<int> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    //각 건물을 볼수 있는 건물의 갯수를 생각하여 풀이
    for(int i=0; i<n; i++){
        int h; cin >> h;
        while(!s.empty() && s.top() <= h) s.pop();
        ans += s.size();
        s.push(h);
    }
    cout << ans;
}