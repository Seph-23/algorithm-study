#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<long long> v(2);
    cin >> v[0] >> v[1];
    sort(v.begin(), v.end());

    int between = 0;
    if (v[0] != v[1]) {
        between = v[1] - v[0] - 1;
        cout << between << "\n";
        for (long long i = v[0] + 1; i < v[1]; i++) {
            cout << i << " ";
        }
    } else {
        cout << 0;
    }
}