#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int k; cin >> k;
    stack<int> s;
    for(int i=0; i<k; i++){
        int tmp; cin >> tmp;
        if(tmp == 0) s.pop();
        else s.push(tmp);
    }
    int total = 0;
    while(!s.empty()){
        total += s.top();
        s.pop();
    }
    cout << total;
}