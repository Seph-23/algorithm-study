#include <bits/stdc++.h>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;

    map<string, int> m1, m2;
    set<string> set_all;

    for(int i=0; i<str1.size()-1; i++){
        string tmp = "";

        if(str1[i] >= 'A' && str1[i] <= 'Z') tmp.push_back(str1[i] + 32);
        if(str1[i] >= 'a' && str1[i] <= 'z') tmp.push_back(str1[i]);
        if(str1[i+1] >= 'A' && str1[i+1] <= 'Z') tmp.push_back(str1[i+1] + 32);
        if(str1[i+1] >= 'a' && str1[i+1] <= 'z') tmp.push_back(str1[i+1]);

        if(tmp.size() == 2){
            m1[tmp]++;
            set_all.insert(tmp);
        }
    }
    for(int i=0; i<str2.size()-1; i++){
        string tmp = "";

        if(str2[i] >= 'A' && str2[i] <= 'Z') tmp.push_back(str2[i] + 32);
        if(str2[i] >= 'a' && str2[i] <= 'z') tmp.push_back(str2[i]);
        if(str2[i+1] >= 'A' && str2[i+1] <= 'Z') tmp.push_back(str2[i+1] + 32);
        if(str2[i+1] >= 'a' && str2[i+1] <= 'z') tmp.push_back(str2[i+1]);

        if(tmp.size() == 2){
            m2[tmp]++;
            set_all.insert(tmp);
        }
    }

    int inter=0, uni=0;
    for(auto a : set_all) {
        inter += min(m1[a], m2[a]);
        uni += max(m1[a], m2[a]);
    }

    if(inter == 0 && uni == 0) return 65536;
    else{
        double div = (double) inter / (double) uni;
        answer = (int) (div * 65536);
    }

    return answer;
}