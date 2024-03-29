#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void recur(int k){
    if(k == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    int st = 1;
    if(k != 0) st = arr[k-1] + 1;
    for(int i = st; i <= n; i++){
        if(!isused[i]){
            arr[k] = i;
            isused[i] = 1;
            recur(k + 1);
            isused[i] = 0;
        }
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    recur(0);
}