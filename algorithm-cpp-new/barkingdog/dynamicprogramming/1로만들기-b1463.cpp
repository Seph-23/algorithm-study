#include <bits/stdc++.h>
using namespace std;

int d[1000010];
int n;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    d[1] = 0;
    cin >> n;

    for(int i=2; i<=n; i++){
        d[i] = d[i-1] + 1;
        if(i%2 == 0) d[i] = min(d[i], d[i/2] + 1);
        if(i%3 == 0) d[i] = min(d[i], d[i/3] + 1);
    }
    cout << d[n];
}