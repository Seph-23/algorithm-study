#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) cout << i << " ";
    }
}