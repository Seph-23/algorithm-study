#include <bits/stdc++.h>
using namespace std;

int x,y,N,M;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> x >> y >> N >> M;

    int cnt=0, a_ans, b_ans;
    for(int i=1; i<=N; i++){
        int a = i;
        int b = N-i;
        if(a*x + b*y == M) {
            cnt++;
            a_ans = a;
            b_ans = b;
        }
    }
    if(cnt == 1){
        cout << a_ans << ' ' << b_ans;
    }else{
        cout << "-1";
    }
}