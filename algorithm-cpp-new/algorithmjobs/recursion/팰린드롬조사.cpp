#include <bits/stdc++.h>
using namespace std;

string st;

int isPalin(int s, int e){
    //종료 조건 : s=e 혹은 s>e 이면 팰이 맞다
    if(s>=e) return 1;
    if(st[s] != st[e]) return 0;        //문자 비교

    return isPalin(s + 1, e - 1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> st;
    if (isPalin(0, st.length() - 1)) cout << "YES";
    else cout << "NO";
}