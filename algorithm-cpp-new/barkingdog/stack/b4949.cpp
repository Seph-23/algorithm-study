#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true){
        string s;
        getline(cin, s);

        //종료 조건
        if(s[0] == '.') break;

        stack<char> st;
        bool ans = true;
        for(auto c : s) {
            if(c == '(' || c == '[') st.push(c);

            if(c == ')'){
                if(!st.empty()) {
                    if(st.top() != '(') {
                        ans = false;
                        break;
                    } else {
                        st.pop();
                    }
                } else {
                    ans = false;
                }
            } else if (c == ']') {
                if(!st.empty()) {
                    if(st.top() != '[') {
                        ans = false;
                        break;
                    } else {
                        st.pop();
                    }
                } else {
                    ans = false;
                }
            }
        }
        if(st.empty() && ans == true){
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}