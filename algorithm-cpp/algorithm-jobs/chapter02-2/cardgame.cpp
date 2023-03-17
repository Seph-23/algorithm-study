#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a[20] = {0}, b[20] = {0};
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) cin >> b[i];

    int aR = 0, bR = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) aR++;
        else if (a[i] < b[i]) bR++;
    }
    if (aR > bR) cout << "A";
    else if (bR > aR) cout << "B";
    else { cout << "D"; }
}