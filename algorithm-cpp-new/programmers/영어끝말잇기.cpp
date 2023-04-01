#include <bits/stdc++.h>

using namespace std;

string arr[110];

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int cnt=1;

    char start, end;
    end = words[0].back();
    arr[0] = words[0];
    bool dup = false;
    for(int i=1; i<words.size(); i++){
        cnt++;
        arr[i] = words[i];
        start = words[i].front();
        if(start != end) {
            if(cnt % n == 0){
                answer.push_back(n);
                answer.push_back(cnt/n);
            } else {
                answer.push_back(cnt%n);
                answer.push_back(cnt/n+1);
            }
            break;
        }
        for(int j=0; j<i; j++){
            if(words[i] == arr[j]){
                if(cnt % n == 0){
                    answer.push_back(n);
                    answer.push_back(cnt/n);
                } else {
                    answer.push_back(cnt%n);
                    answer.push_back(cnt/n+1);
                }
                dup = true;
                break;
            }
        }
        if(dup) break;

        end = words[i].back();
    }

    if(answer.empty()){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}