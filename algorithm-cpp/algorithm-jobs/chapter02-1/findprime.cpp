#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    int tmp, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (isPrime(tmp)) count++;
    }
    cout << count;
}