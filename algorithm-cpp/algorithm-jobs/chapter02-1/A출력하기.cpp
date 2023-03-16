#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int count;
    cin >> count;
    int half = count / 2 + 1;
    for (int i = 1; i <= count; i++) {
        for (int j = 1; j <= count - i; j++) {
            cout << " ";
        }
        if (i == half) {
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
        } else {
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1) cout << "*";
                else cout << " ";
            }
        }
        cout << "\n";
    }
}