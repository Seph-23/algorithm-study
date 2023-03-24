#include <bits/stdc++.h>
using namespace std;

int n;
char inequal[110];
int arr[110];
bool visited[110];
int arr2[110];
int arr3[110];
bool printed;

void recur(int cur){
    if(cur == n+1){
        for(int i=0; i<n+1; i++){
            if(inequal[i] == '<' && arr[i] > arr[i+1]) return;
            if(inequal[i] == '>' && arr[i] < arr[i+1]) return;
        }

        if(!printed){       //맨 앞 출력 ? 한번이라도 출력한적이 없다면 arr3에 저장하고 true
            for(int i=0; i<n+1; i++) arr3[i] = arr[i];
            printed = true;
        }

        for(int i=0; i<n+1; i++) arr2[i] = arr[i];      //마지막 출력하기 위해서 계속 갱신해서 마지막 값을 출력한다
        return;
    }
    for(int i=0; i<10; i++){        //순열코드
        if(visited[i]) continue;
        arr[cur] = i;
        visited[i] = true;
        recur(cur+1);
        visited[i] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++) cin >> inequal[i];
    recur(0);

    for(int i=0; i<n+1; i++) cout << arr2[i];
    cout << '\n';

    for(int i=0; i<n+1; i++) cout << arr3[i];
}