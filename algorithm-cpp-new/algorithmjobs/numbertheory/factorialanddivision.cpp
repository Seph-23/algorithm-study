#include <bits/stdc++.h>
using namespace std;

long long n, a;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> a;
    long long ans=0;
    for(long long i=a; i<=n; i*=a){
        ans += n / i;
    }
    cout << ans;
}