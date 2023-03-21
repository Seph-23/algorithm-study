#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    s += "#";
    int cnt=1;
    for(int i=1; i<s.length(); i++){
        if(s[i] != s[i-1]){
            if(cnt != 1){
                cout << cnt;
            }
            cout << s[i-1];
            cnt = 1;
        }else{
            cnt++;
        }
    }
}