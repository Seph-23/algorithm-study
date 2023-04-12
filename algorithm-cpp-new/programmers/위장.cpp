#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    map<string, int> m;
    for(auto s : clothes){
        m[s[1]]++;
    }


    for(auto x : m ){
        answer *= x.second + 1;
    }

    return answer - 1;
}