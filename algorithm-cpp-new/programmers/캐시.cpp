#include <bits/stdc++.h>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;

    deque<string> dq;

    for(string city : cities) {
        for(int i=0; i<city.size(); i++) city[i] = tolower(city[i]);        //도시 이름 소문자화

        bool cache = false;

        for(int i=0; i<dq.size(); i++){
            if(dq[i] == city) {
                cache = true;
                dq.erase(dq.begin()+i);
                dq.push_back(city);
                answer += 1;
                break;
            }
        }
        if(!cache){
            dq.push_back(city);
            if(dq.size() > cacheSize) dq.pop_front();
            answer += 5;
        }
    }

    return answer;
}