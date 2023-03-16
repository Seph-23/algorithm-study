#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int start, end, total = 0;
    cin >> start >> end;
    list<int> results;

    for (int i = 1; i * i <= end; i++) {
        if (i * i <= end && i * i >= start) {
            total += i * i;
            results.push_back(i * i);
        }
    }

    if (results.empty()) {
        cout << -1;
    } else {
        cout << total << "\n";
        cout << *min_element(results.begin(), results.end()) << " "
             << *max_element(results.begin(), results.end());
    }
}