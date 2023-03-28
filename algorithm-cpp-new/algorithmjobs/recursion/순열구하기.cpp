#include <bits/stdc++.h>
using namespace std;

int n, r;
int res[20];
bool visited[20];

void getResult(int x){
    //현재 x번째 for이고, r중 for이 필요하다.
    if(x >= r){
        for(int i=0; i<r; i++) cout << (char) ('a' + res[i]);
        cout << '\n';
        return;
    } else {
        for(int i=0; i<n; i++){
            if(visited[i]) continue;

            res[x] = i;
            visited[i] = true;
            getResult(x+1);

            visited[i] = false;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> r;
    getResult(0);
}