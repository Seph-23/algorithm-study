#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int count;
    cin >> count;

    for (int i = 1; i <= count; i++) {
        for (int j = 1; j <= count - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}