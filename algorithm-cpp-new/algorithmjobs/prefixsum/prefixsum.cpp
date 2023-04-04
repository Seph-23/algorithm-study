#include <bits/stdc++.h>
using namespace std;

int n, m, l, r;
int arr[100010];
int sum[100010];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> arr[i];
    sum[1] = arr[1];
    for(int i=2; i<=n; i++){
        sum[i] = sum[i-1] + arr[i];
    }
    for(int i=0; i<m; i++){
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << '\n';
    }
}