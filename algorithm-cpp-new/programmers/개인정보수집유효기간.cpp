#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> terms_map;

    for(auto term : terms){
        stringstream ss(term);
        char type; int month;
        ss >> type >> month;
        terms_map[type] = month;
    }

    int today_year = stoi(today.substr(0, 4));
    int today_month = stoi(today.substr(5, 2));
    int today_day = stoi(today.substr(8, 2));

    int limit = (today_year * 12 * 28) + today_month * 28 + today_day;

    int cnt = 1;
    for(auto s : privacies){
        int y = stoi(s.substr(0, 4));
        int m = stoi(s.substr(5, 2));
        int d = stoi(s.substr(8, 2));
        int cur = (y * 12 * 28) + m * 28 + d;
        char t = s.back();
        int tm = terms_map[t];
        if(cur + tm * 28 <= limit) answer.push_back(cnt);
        cnt++;
    }

    return answer;
}