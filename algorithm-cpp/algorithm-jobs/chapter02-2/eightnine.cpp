#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n,m; cin >> n >> m;
    int arr[n][m], arr2[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            arr2[i][j] = arr[i][j];
        }
    }
    for(int i=n-1;i>=0; i--){
        for(int j=m-1;j>=0; j--){
            arr[i][m-j-1] = arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}