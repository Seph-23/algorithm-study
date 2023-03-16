#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<int> x(1000);
    vector<int> y(1000);
    for (int i = 0; i < 3; i++) {
        int tmpX, tmpY;
        cin >> tmpX >> tmpY;
        x[tmpX]++;
        y[tmpY]++;
    }

    int resultX, resultY;
    for (int i = 0; i < 1000; i++) {
        if (x[i] == 1) resultX = i;
        if (y[i] == 1) resultY = i;
    }
    cout << resultX << " " << resultY;
}