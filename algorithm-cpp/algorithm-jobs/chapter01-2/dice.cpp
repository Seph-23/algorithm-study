#include <iostream>

using namespace std;

int result = 0, tmp = 0;

int main() {
    int n;
    int a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a == b && b == c) {
            tmp = 10000 + (a * 1000);
        } else if (a == b && a != c) {
            tmp = 1000 + a * 100;
        } else if (a != b && a == c) {
            tmp = 1000 + a * 100;
        } else if (a != b && b == c) {
            tmp = 1000 + b * 100;
        } else if (a > b && a > c) {
            tmp = a * 100;
        } else if (b > a && b > c) {
            tmp = b * 100;
        } else if (c > a && c > b) {
            tmp = c * 100;
        }

        if (result < tmp) result = tmp;
    }
    cout << result;
}