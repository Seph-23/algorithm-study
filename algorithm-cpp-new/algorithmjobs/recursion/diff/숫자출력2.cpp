#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[50];
bool visited[50];

/**
 * 방문처리, 앞에 채워진 적이 있는 숫자는 넘어간다.
 * 현재 값의 사용여부를 bool 타입으로 true, false 처리
 * 인덱스와 사용 전 후 초기화에 주의한다.
 */
void recur(int cur){
    if(cur == n) {
        for(int i=0; i<n; i++) cout << arr[i];
        cout << '\n';
        return;
    }
    for(int i=0; i<m; i++){
        if(visited[i]) continue;

        arr[cur] = i;
        visited[i] = true;
        recur(cur + 1);

        visited[i] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    recur(0);
}