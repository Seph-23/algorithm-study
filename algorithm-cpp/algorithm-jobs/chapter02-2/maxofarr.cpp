#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int arr[20][20]={0}, x, y, max=0;
    for(int i=1;i<=9;i++){
        for (int j = 1; j <= 9; j++) {
            cin >> arr[i][j];
            if(arr[i][j] > max) {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << max << '\n' << x << ' ' << y;
}