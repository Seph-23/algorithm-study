#include <bits/stdc++.h>
using namespace std;

int n;
int arr[110];
bool printed;

//좋은 수열인지 체크하는 함수
bool check(int cur){
    bool same;
    for(int len=1; len<=cur/2; len++){      //cur 수열의 길이의 반까지만 본다.
        for(int i=0; i<cur-2*len+1; i++){
            same = true;
            for(int j=0; j<len; j++){
                if(arr[i+j] != arr[i+len+j]) same = false;
            }
            if(same) return false;
        }
    }
    return true;
}

void recur(int cur){
    if(printed) return;
    if(!check(cur)) return;

    if(cur == n){
        for(int i=0; i<n; i++){
            cout << arr[i];
        }
        cout << '\n';
        printed = true;         //좋은 수열을 출력하면 true
        return;
    }
    for(int i=1; i<=3; i++){
        arr[cur] = i;
        recur(cur + 1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    recur(0);
}