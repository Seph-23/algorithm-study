#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;
    int ans = 0;
    stack<char> st;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') st.push(s[i]);
        else if (s[i] == ')' && s[i-1] == '('){
            st.pop();
            ans += st.size();
        }else{
            ans++;
            st.pop();
        }
    }
    cout << ans << '\n';
}