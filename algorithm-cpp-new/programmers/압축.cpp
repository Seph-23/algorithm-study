#include <bits/stdc++.h>

using namespace std;
int cnt;

vector<int> solution(string msg) {
    vector<int> answer;

    unordered_map<string, int> um;
    cnt = 1;
    for(int i=0; i<26; i++){
        char c = 'A' + i;
        string s; s.push_back(c);
        um[s] = cnt++;
    }

    string cur = "";
    for (int i = 0; i < msg.length(); i++){
        cur += msg[i];
        if (um[cur] == 0){
            um[cur] = cnt++;
            cur = cur.substr(0, cur.length() - 1);
            answer.push_back(um[cur]);
            cur = "";
            i--;
        }
    }
    answer.push_back(um[cur]);

    return answer;
}