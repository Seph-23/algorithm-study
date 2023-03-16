#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;

    int arr[110][110] = {0};
    int x, y, num = 1;
    for (int i = 0; i < n; i++) {
        x = 0;
        y = i;

        for (int j = 0; j < i + 1; j++) {
            arr[x][y] = num;
            x++;
            y--;
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}