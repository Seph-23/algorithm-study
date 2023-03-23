#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[50];

/**
 * 구성이 같은 케이스를 제거해야한다. ex) 012 021 120
 */
void recur(int cur, int start){
    if(cur == n) {
        for(int i=0; i<n; i++) cout << arr[i];
        cout << '\n';
        return;
    }
    for(int i=start; i<m; i++){
        arr[cur] = i;
        recur(cur + 1, i+1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    recur(0, 0);
}