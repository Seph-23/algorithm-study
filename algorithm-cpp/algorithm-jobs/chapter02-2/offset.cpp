#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int arr[20][20], arr2[20][20];
    for(int i=0; i<20; i++){
        for(int j=0;j<20;j++){
            arr[i][j] = 20;
            arr2[i][j] = 20;
        }
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> arr[i][j];
            arr2[i][j] = arr[i][j];
        }
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            bool tmp = false;
            if(arr[i-1][j] > arr[i][j] && arr[i][j-1] > arr[i][j]
            && arr[i][j+1] > arr[i][j] && arr[i+1][j] > arr[i][j]) tmp = true;
            if(tmp) arr2[i][j] = 99;
        }
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(arr2[i][j] == 99) {
                cout << '*' << ' ';
                continue;
            } else {
                cout << arr2[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}