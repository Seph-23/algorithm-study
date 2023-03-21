#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s[102];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(s[j].compare(s[j+1]) > 0) swap(s[j], s[j + 1]);
        }
    }
    for (int i = 0; i < n; i++) cout << s[i] << '\n';
}