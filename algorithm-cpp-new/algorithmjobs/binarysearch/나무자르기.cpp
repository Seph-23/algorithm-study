#include <bits/stdc++.h>
using namespace std;

int arr[10000100];
int n, m;

bool check(int x){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > x) sum += arr[i] - x;
    }
    return sum >= m;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];

    int s,e,mid,ans;
    ans=0; s=0; e=1000000000;

    while(s <= e){
        mid = (s+e)/2;
        if(check(mid)){
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    cout << ans;
}