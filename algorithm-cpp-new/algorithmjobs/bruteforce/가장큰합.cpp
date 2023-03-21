#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int arr[1010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for(int i=1; i<=t; i++){
        cin >> n >> m;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int ans = -1;
        for(int j=0; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[j] + arr[k] > ans && arr[j] + arr[k] <= m) ans = arr[j] + arr[k];
            }
        }
        cout << '#' << i << ' ' << ans << '\n';
    }
}