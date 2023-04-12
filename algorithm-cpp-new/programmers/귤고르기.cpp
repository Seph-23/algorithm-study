#include <bits/stdc++.h>

using namespace std;

map<int, int> m;

int solution(int k, vector<int> tangerine) {
    for(auto t : tangerine){
        m[t]++;
    }

    vector<int> v;
    for(auto c : m){
        v.push_back(c.second);
    }
    sort(v.rbegin(), v.rend());

    int cnt = 0;
    int tot = 0;
    for(auto x : v){
        if(tot >= k) break;
        tot += x;
        cnt++;
    }

    return cnt;
}