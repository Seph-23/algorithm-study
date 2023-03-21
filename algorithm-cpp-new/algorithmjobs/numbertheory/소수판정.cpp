#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int cnt=0;
    cin >> n;

    for(int i=2; i*i<=n; i++){
        if(n%i==0) cnt++;
    }
    if(cnt == 0 && n != 1) cout << "YES";
    else cout << "NO";
}