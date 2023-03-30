#include <bits/stdc++.h>
using namespace std;

int n;
int arr[10010][2];
long long v;

bool check(int x){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(x < arr[i][0]) continue;
        else if (x <= arr[i][1]) sum += x - arr[i][0] + 1;
        else sum += arr[i][1] - arr[i][0] + 1;
    }
    return sum >= v;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    cin >> v;
    v++;

    int s, e, mid, ans;
    ans = 0; s = 0; e = 0x7f7f7f7f;
    while(s <= e){
        mid = (s + e) / 2;
        if (check(mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    cout << ans;
}