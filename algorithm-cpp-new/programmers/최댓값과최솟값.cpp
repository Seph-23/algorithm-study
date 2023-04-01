#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";

    int num;
    istringstream ss;
    ss.str(s);
    int mx = -0x7f7f7f7f, mn=0x7f7f7f7f;
    while(ss >> num){
        mx = max(num, mx);
        mn = min(num, mn);
    }

    string mn_str = to_string(mn);
    string mx_str = to_string(mx);
    answer = mn_str + ' ' + mx_str;

    return answer;
}