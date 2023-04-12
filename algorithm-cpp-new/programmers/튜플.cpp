#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    map<int, int> m;

    string tmp;
    for(int i=1; i<s.size() - 1; i++){
        if(s[i] != '{' && s[i] != '}' && s[i] != ','){

            tmp += s[i];

            if(s[i+1] != '}' && s[i+1] != ',') continue;

            m[stoi(tmp)]++;
        }
        tmp = "";
    }

    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for(auto x : v){
        answer.push_back(x.first);
    }

    return answer;
}