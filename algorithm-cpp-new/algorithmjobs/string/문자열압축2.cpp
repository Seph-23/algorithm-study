#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    for(int t=1; t<=T; t++){
        string s; cin >> s;
        cout << '#' << t << ' ';
        for(int i=0; i<s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                int tmp = s[i] - '0';
                for(int j=0; j<tmp; j++){
                    cout << s[i+1];
                }
                i++;
            }else{
                cout << s[i];
            }
        }
        cout << '\n';
    }
}