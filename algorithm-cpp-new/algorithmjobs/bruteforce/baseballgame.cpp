#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int info[105][3];
    int res=0;
    for(int i=0; i<N; i++){
        cin >> info[i][0] >> info[i][1] >> info[i][2];
    }
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                if(i!=j && j!=k && i!=k){
                    bool flag = false;
                    for(int p=0; p<N; p++){
                        int first = info[p][0] / 100;
                        int second = (info[p][0] / 10) % 10;
                        int third = info[p][0] % 10;

                        int strike = 0, ball = 0;
                        if(first == i) strike++;
                        if(second == j) strike++;
                        if(third == k) strike++;
                        if(i == second || i == third) ball++;
                        if(j == first || j == third) ball++;
                        if(k == first || k == second) ball++;

                        if(info[p][1] != strike || info[p][2] != ball) flag = true;
                    }
                    if(flag == false) res++;
                }
            }
        }
    }
    cout << res << '\n';
}