#include <bits/stdc++.h>

using namespace std;

int n, k;           //n: 학생 수, k: 방 최대 인원
int s[2][7];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n >> k;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a;        //여학생 0, 남학생 1
        cin >> b;        //학년 1~6
        s[a][b]++;
    }

    int ans=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<7; j++){
            ans += s[i][j] / k;
            if(s[i][j] % k) ans++;
        }
    }
    cout << ans;
}