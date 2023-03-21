#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        int d = 'a' - 'A';
        if('a' <= s[i] && s[i] <= 'z') s[i] -= d;
        else if ('A' <= s[i] && s[i] <= 'Z') s[i] += d;
        else continue;
    }
    cout << s;
}