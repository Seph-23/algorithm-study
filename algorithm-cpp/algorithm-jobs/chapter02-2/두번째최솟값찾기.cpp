#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int arr[9];
    int idx = 0, min = 20000000;
    for (int i = 0; i < 9; i++) cin >> arr[i];
    for (int i = 0; i < 9; i++) {
        if (min > arr[i]) {
            min = arr[i];
            idx = i;
        }
    }
    arr[idx] = 20000000;
    min = 20000000;
    for (int i = 0; i < 9; i++) {
        if (min > arr[i]) {
            min = arr[i];
            idx = i;
        }
    }
    cout << min << '\n';
    cout << idx + 1;
}