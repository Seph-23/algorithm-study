#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<int> v(5);
    for (int i = 0; i < 5; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int total = 0;
    for (int i = 0; i < 5; i++) total += v[i];
    cout << total / 5 << "\n";
    cout << v[2];
}