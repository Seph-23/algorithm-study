#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    bool ans = true;
    int idx = 0;
    for(int i=s.length()-1; i>=0; i--){
        if(s[idx] != s[i]) {
            ans = false;
            break;
        }
        idx++;
    }
    if(ans) cout << "YES";
    else cout << "NO";
}