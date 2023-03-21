#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[1000000];
    int cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            cout << i << ' ';

            if(n / i != i) arr[cnt++] = n/i;
        }
    }
    for(int i=cnt-1; i>=0; i--){
        cout << arr[i] << ' ';
    }
}