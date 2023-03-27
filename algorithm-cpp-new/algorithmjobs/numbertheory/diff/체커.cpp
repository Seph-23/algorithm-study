#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;

    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(i*i <= n) cnt++;
    }
    cout << cnt;
}