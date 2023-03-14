#include <iostream>

using namespace std;

int n, k;

int main() {

    cin >> n >> k;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (count == k) {
                cout << i;
                break;
            }
        }
    }
    if (count < k) {
        cout << 0;
    }
}