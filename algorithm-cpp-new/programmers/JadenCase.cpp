#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";

    s.insert(0, " ");
    for(int i=1; i<s.size(); i++){
        if(s[i] == ' '){
            answer += ' ';
            continue;
        }
        if(s[i] >= 'a' && s[i] <= 'z' && s[i-1] == ' '){
            s[i] -= 32;
        }
        if(s[i] >= 'A' && s[i] <= 'Z' && s[i-1] != ' '){
            s[i] += 32;
        }
        answer += s[i];
    }

    return answer;
}