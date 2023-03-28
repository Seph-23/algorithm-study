#include <bits/stdc++.h>
using namespace std;

int T, N;

int main() {
    cin.tie(0)->sync_with_stdio(0);


    cin >> T;
    bool counted;
    for(int t=1; t<=T; t++){
        int cnt[20] = {};
        cin >> N;
        int x;

        for(int i=N; ; i+=N){
            x = i;
            while(x > 0){
                cnt[x % 10]++;
                x /= 10;
            }
            counted = true;
            for(int j=0; j<10; j++){
                if(cnt[j] == 0) counted = false;
            }
            if(counted){
                cout << '#' << t << ' ';
                cout << i << '\n';
                break;
            }
        }
    }
}