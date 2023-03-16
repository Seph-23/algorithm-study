#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int arr[20][20] = {0};
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        //행고정 열반복 뒤집기
        for (int j = 1; j <= 10; j++) {
            if (arr[i][j] == 1) arr[i][j] = 0;
            else arr[i][j] = 1;
        }
        //열고정 행반복 뒤집기
        for (int j = 1; j <= 10; j++) {
            if (arr[j][i] == 1) arr[j][i] = 0;
            else arr[j][i] = 1;
        }
        //대각선이면 한번 더 뒤집기
        if (arr[i][i] == 1) arr[i][i] = 0;
        else arr[i][i] = 1;
    }
    //출력
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}