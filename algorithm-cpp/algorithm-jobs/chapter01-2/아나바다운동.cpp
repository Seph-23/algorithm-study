#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int s, e;
        int sum = 0;
        cin >> s >> e;
        for (int j = s; j <= e; j++) {
            sum += j;
        }
        cout << "#" << i << " " << sum << "\n";
    }
}