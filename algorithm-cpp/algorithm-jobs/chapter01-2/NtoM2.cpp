#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = n; i <= m; i++) {
        cout << i << " ";
        count++;
        if (count == 8) {
            cout << "\n";
            count = 0;
        }
    }
}