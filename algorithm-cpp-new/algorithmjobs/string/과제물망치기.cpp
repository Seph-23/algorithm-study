#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
}