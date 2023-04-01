#include <bits/stdc++.h>

using namespace std;

string dec_to_binary(int n){
    int arr[30], i = 0, num = n;
    string a;

    while(n != 0){
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }

    for(i = i - 1; i >= 0; i--){
        a += to_string(arr[i]);
    }
    return a;
}

int solution(int n) {
    int answer = 0;
    string n_bin = dec_to_binary(n);
    int cnt = 0;
    for(int i=0; i<n_bin.size(); i++){
        if(n_bin[i] == '1') cnt++;
    }

    for(int i=n+1; ;i++){
        string s = dec_to_binary(i);
        int cnt2 = 0;
        for(int j=0; j<s.size(); j++){
            if(s[j] == '1') {
                cnt2++;
            }
        }
        if(cnt2 == cnt) {
            answer = i;
            break;
        }
    }

    return answer;
}