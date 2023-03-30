#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, q; cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> q;

    for(int i=0; i<q; i++){
        int x; cin >> x;
        int s = 0;
        int e = n - 1;
        int mid;
        int ans = -1;

        while(s <= e){
            mid = (s + e) / 2;

            if(arr[mid] >= x) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        cout << ans << '\n';
    }
}