#include <bits/stdc++.h>

using namespace std;

int remove_zero(string &s){
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') {
            s.erase(s.begin()+i);
            cnt++;
            i--;
        }
    }
    return cnt;
}

string dec_to_binary(int n){
    int arr[30], i = 0, num = n;
    string a;

    while(n != 0){
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }
    cout << num << " in Binary is ";

    for(i = i - 1; i >= 0;i--){
        a += to_string(arr[i]);
    }
    return a;
}

vector<int> solution(string s) {
    vector<int> answer;

    int rem = 0;
    int cnt = 0;
    while(s.size()>1){
        cnt++;
        rem += remove_zero(s);
        int dec = s.size();
        s = dec_to_binary(dec);
    }
    answer.push_back(cnt);
    answer.push_back(rem);

    return answer;
}