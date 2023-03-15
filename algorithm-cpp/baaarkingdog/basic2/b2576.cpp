#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int sum = 0, tmp = 0, min = 0;

    for (int i = 0; i < 7; i++) {
        cin >> tmp;
        if (min == 0 && tmp % 2 == 1) min = tmp;
        if (tmp % 2 == 1) {
            sum += tmp;
            if (tmp < min) min = tmp;
        }
    }

    if (sum == 0) cout << -1;
    else {
        cout << sum << "\n" << min;
    }
}