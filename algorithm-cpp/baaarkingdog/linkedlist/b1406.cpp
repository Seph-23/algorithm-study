#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string s; cin >> s;
    int m; cin >> m;
    list<char> l;
    for(auto c : s) {
        l.push_back(c);
    }

    auto cursor = l.end();
    for(int i=0; i<m; i++) {
        char com; cin >> com;

        if(com == 'L') {
            if(cursor != l.begin()) cursor--;
        } else if (com == 'D') {
            if(cursor != l.end()) cursor++;
        } else if (com == 'P'){
            char tmp; cin >> tmp;
            l.insert(cursor, tmp);
        } else {
            if(cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor);
            }
        }
    }

    for(auto c : l) cout << c;
}