#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int arr[1010][10];
    int resNum=0, result=-1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=5; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=1; i<=N; i++){
        int num=0;
        for(int j=1; j<=N; j++){
            if(i == j) continue;
            if(arr[i][1] == arr[j][1] || arr[i][2] == arr[j][2] || arr[i][3] == arr[j][3]
            || arr[i][4] == arr[j][4] || arr[i][5] == arr[j][5]){
                num++;
            }
        }
        if(result < num){
            result = num;
            resNum = i;
        }
    }
    cout << resNum;
}