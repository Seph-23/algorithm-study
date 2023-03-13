#include <iostream>

using namespace std;

int a[26], cnt = 0;
string input;

int main() {

    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < 97) {
            a[input[i] - 65]++;     //대문자
        } else {
            a[input[i] - 97]++;
        }
    }

    int max = 0, maxIndex = 0;

    for (int i = 0; i < 26; i++) {
        if (max < a[i]) {
            max = a[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max == a[i]) {
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << "?";
    } else {
        cout << (char) (maxIndex + 65);
    }

}