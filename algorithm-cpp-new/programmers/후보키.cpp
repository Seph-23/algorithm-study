#include <bits/stdc++.h>

using namespace std;

bool possi(vector<int> vec,int now){
    for(int i = 0; i < vec.size(); i++)
        // ans에 있던 조합이 이번에 들어온 조합이랑 같은 것인지 확인
        if((vec[i] & now) == vec[i])
            return false;

    return true;
}

int solution(vector<vector<string>> relation) {
    int rowSize = (int)relation.size();
    int colSize = (int)relation[0].size();
    vector<int> ans;

    for(int i = 1; i < (1<<colSize); i++){
        set<string> s; //
        for(int j = 0; j < rowSize; j++){
            string now = "";
            for(int k = 0; k < colSize; k++){
                if(i & (1<<k))
                    now += relation[j][k];
            }
            s.insert(now);
        }
        if(s.size() == rowSize && possi(ans,i))
            ans.push_back(i);
    }

    return (int)ans.size();
}