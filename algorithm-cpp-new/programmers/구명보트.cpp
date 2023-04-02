#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());

    int s = 0;
    int e = people.end() - 1 - people.begin();

    int cnt = 0;
    while(s <= e){
        if(people[s] + people[e] <= limit){
            cnt++; s++; e--;
        } else if(people[s] + people[e] > limit){
            cnt++; e--;
        }
    }

    return cnt;
}