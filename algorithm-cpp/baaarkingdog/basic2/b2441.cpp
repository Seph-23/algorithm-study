#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = n - i; j >= 1; j--) {
            cout << ' ';
        }
        for (int j = n; j > n - i; j--) {
            cout << '*';
        }
        cout << '\n';
    }
}