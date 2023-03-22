#include <bits/stdc++.h>
using namespace std;

long long k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;
    long long x = k;

    int cnt=0;
    int arr[1000000] = {};
    for(long long i=2; i*i<=k; i++){
        while(x % i == 0){
            arr[cnt++] = i;
            x /= i;
        }
    }
    if(x != 1) arr[cnt++] = x;
    cout << cnt << '\n';
    for(int i=0; i<cnt; i++){
        cout << arr[i] << ' ';
    }
}