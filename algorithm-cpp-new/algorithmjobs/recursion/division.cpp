#include <bits/stdc++.h>
using namespace std;

int n;
int res[100];
int cnt;

void getResult(int sum, int idx){
    //현재까지 구한 합이 sum이다.
    //지금 idx 번째 숫자를 결정할 차례이다, 즉 res[idx]
    if(sum == n){       //리턴 조건 : 숫자 결정이 끝났다
        cout << res[0];
        for(int i=1; i<idx; i++){       //idx가 지금 어디까지 숫자를 넣었는지 기억하고 있다.
            cout << '+' << res[i];
        }
        cout << '\n';
        cnt++;
    }else{
        int num;
        if(idx==0) num = n-1;       //n 자기 자신은 합이 될수 없으므로, 엣지케이스 제거.
        else num = n - sum;      //다음 수는 아무리 큰 수를 넣어봐야 n-sum 이상은 넣지 못한다
        for(int i=num; i>=1; i--){
            res[idx] = i;

            if(idx > 0 && res[idx-1] < res[idx]) continue; //만약 이전 숫자보다 크다면 스킵
            getResult(sum+i, idx+1);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    getResult(0, 0);
    cout << cnt;
}