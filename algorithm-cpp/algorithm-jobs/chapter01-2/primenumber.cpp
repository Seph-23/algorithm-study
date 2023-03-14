#include <iostream>

using namespace std;

int main() {

    int input;
    bool result = true;
    cin >> input;

    if (input == 2) {
        result = true;
    }
    for (int i = 2; i < input / 2; i++) {
        if (input % i == 0) {
            result = false;
            break;
        }
    }

    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}