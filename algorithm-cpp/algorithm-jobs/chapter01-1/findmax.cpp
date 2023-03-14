#include <bits/stdc++.h>

using namespace std;

int main() {
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    cout << *max_element(input, input + 3);
}
