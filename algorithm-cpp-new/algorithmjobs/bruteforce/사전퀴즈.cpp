#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    for(int t=1; t<=T; t++){
        string s; cin >> s;
        char a = s[0], b = s[1];
        int cnt = 0;
        cout << '#' << t << ' ';
        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                if('a'+i == 'a'+j) continue;
                cnt++;
                if(a == 'a'+i && b == 'a'+j) cout << cnt << '\n';;
            }
        }
    }
}