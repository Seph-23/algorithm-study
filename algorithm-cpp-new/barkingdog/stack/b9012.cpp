#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    while(n--){
        stack<char> st;
        string s; cin >> s;
        for(auto c : s ) {
            if(c == '(') st.push(c);
            if(c == ')' && !st.empty() && st.top() == '(') st.pop();
            else if(c == ')' && st.empty()) st.push(c);
        }
        if(st.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}