#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    string result;

    for (int i = 0; i < 3; i++) {
        int tmp = 0;
        cin >> a >> b >> c >> d;
        tmp = a + b + c + d;
        if (tmp == 4) {
            result += "E\n";
        } else if (tmp == 3) {
            result += "A\n";
        } else if (tmp == 2) {
            result += "B\n";
        } else if (tmp == 1) {
            result += "C\n";
        } else if (tmp == 0) {
            result += "D\n";
        }
    }
    cout << result;
}