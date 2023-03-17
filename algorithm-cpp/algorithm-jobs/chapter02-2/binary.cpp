#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;
    int arr[1000]={0}, idx=0;
    while(n != 0){
        if(n%2==1){
            arr[idx] = 1;
        }else {
            arr[idx] = 0;
        }
        idx++;
        n /= 2;
    }
    for(int i=idx-1;i>=0;i--){
        cout << arr[i];
    }
}