#include <bits/stdc++.h>

using namespace std;

/**
 * 코카 콜라
 */
int main() {
    int n;
    cin >> n;

    if (n % 8 == 0) cout << 2;
    else if (n % 8 == 7) cout << 3;
    else if (n % 8 == 6) cout << 4;
    else cout << n % 8;
}