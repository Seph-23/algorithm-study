#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N;
    int ans = 0;
    while(N--){
        stack<char> st;
        string s; cin >> s;

        for(auto c : s) {
                if(st.empty()){
                    st.push(c);
                }else{
                    if(c == st.top()){
                        st.pop();
                    } else {
                        st.push(c);
                    }
                }
        }
        if(st.empty()) ans++;
    }
    cout << ans;
}