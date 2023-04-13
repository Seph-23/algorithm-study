#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> users;
    vector<pair<string, string>> v_tmp;

    for(auto s : record){
        stringstream ss(s);
        string com, id, nick;
        ss >> com >> id >> nick;

        if(com == "Change") users[id] = nick;
        if(com == "Enter") {
            users[id] = nick;
            v_tmp.push_back({com, id});
        }
        if(com == "Leave") v_tmp.push_back({com, id});
    }

    for(auto s : v_tmp){
        string x = "";
        if(s.first == "Enter"){
            x += users[s.second];
            x += "님이 들어왔습니다.";
        } else if (s.first == "Leave"){
            x += users[s.second];
            x += "님이 나갔습니다.";
        }
        answer.push_back(x);
    }
    return answer;
}