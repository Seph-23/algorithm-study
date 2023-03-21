#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    if(pos > 0) {
        cout << dat[pos-1] << '\n';
        pos--;
    } else cout << -1 << '\n';
}

int top() {
    if(pos > 0) return dat[pos-1];
    else return -1;
}

void empty() {
    if(pos == 0) cout << 1 << '\n';
    else cout << 0 << '\n';
}

void size() {
    cout << pos << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        if(s == "push") {
            int tmp; cin >> tmp;
            push(tmp);
        } else if (s == "pop") {
            pop();
        } else if (s == "top") {
            int tmp = top();
            cout << tmp << '\n';
        } else if (s == "empty") {
            empty();
        } else {
            size();
        }
    }
}