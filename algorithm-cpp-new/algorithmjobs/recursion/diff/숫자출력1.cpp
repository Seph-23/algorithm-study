#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[50];

/**
 * 외우자!!
 */
void recur(int cur){
    if(cur == n) {
        for(int i=0; i<n; i++) cout << arr[i];
        cout << '\n';
        return;
    }
    for(int i=0; i<m; i++){
        arr[cur] = i;
        recur(cur + 1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    recur(0);
}