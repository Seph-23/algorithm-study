#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> st;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    int cnt = 0;
    while(n != 0){
        st.push(n%2);
        n/=2;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}