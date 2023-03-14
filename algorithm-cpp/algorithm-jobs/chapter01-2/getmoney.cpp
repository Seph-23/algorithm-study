#include <bits/stdc++.h>

using namespace std;

int target;
int sum = 0, i = 0;

int main() {
    cin >> target;

    while (sum < target) {
        sum += (i + 1);
        i++;
    }

    cout << i;
}
