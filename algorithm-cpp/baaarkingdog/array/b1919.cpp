#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string s1, s2; cin >> s1 >> s2;
    int a1[26]={}, a2[26]={};

    for(auto c : s1) a1[c - 'a']++;
    for(auto c : s2) a2[c - 'a']++;

    int ans=0;
    for(int i=0; i<26; i++){
        ans += abs(a1[i] - a2[i]);
    }
    cout << ans;
}