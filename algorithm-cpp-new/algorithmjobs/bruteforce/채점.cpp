#include <bits/stdc++.h>
using namespace std;

int t,n,m;
int arr[22][22];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    for(int T=1; T<=t; T++){
        cin >> n >> m;
        int score[22] = {};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
                score[i] += arr[i][j];
            }
        }

        int mx=0, cnt=0;
        for(int i=0; i<n; i++){
            if(score[i] > mx){
                mx = score[i];
            }
        }
        for(int i=0; i<n; i++){
            if(score[i] == mx){
                cnt++;
            }
        }
        cout << '#' << T << ' ' << cnt << ' ' << mx << '\n';
    }

}