#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    for(int t=1; t<=T; t++){
        string s; cin >> s;
        for(int i=0; i<s.length(); i++){
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                s.erase(i, 1);
                i--;
            }
        }
        cout << '#' << t << ' ' << s << '\n';
    }
}