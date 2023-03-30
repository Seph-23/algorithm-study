#include <bits/stdc++.h>
using namespace std;

int n, q;
int arr[100010];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> q;
    for(int i=0; i<n; i++) cin >> arr[i];

    int s, e;
    int mid;
    int x;
    bool found;

    for(int i=0; i<q; i++){
        cin >> x;

        s = 0;
        e = n - 1;
        found = false;
        while(s <= e){
            mid = (s+e) / 2;

            if(arr[mid] == x) {
                found = true;
                break;
            }else if (arr[mid] < x) s = mid + 1;
            else e = mid - 1;
        }

        if(found) cout << "YES";
        else cout << "NO";
    }
}