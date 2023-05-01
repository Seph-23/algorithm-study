#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[30];
int cnt = 0;
void recur(int cur, int tot){
    if(cur == n){
        if(tot == s) cnt++;
        return;
    }
    recur(cur + 1, tot);
    recur(cur + 1, tot + arr[cur]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> s;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    recur(0, 0);
    if(s == 0) cnt--;
    cout << cnt;
}