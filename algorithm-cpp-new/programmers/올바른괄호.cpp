#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push('(');
        if(s[i] == ')'){
            if(!st.empty()){
                if(st.top() != '('){
                    answer = false;
                    break;
                }
                st.pop();
            } else {
                answer = false;
                break;
            }
        }
    }

    if(!st.empty()) answer = false;

    return answer;
}