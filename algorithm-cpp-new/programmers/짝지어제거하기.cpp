#include <bits/stdc++.h>
using namespace std;

int solution(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(i==0) {
            st.push(s[0]);
            continue;
        }
        if(!st.empty()){
            if(st.top() == s[i]) {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }
    if(!st.empty()) return 0;
    else return 1;
}