#include <bits/stdc++.h>
using namespace std;

string arr[70];
string ans;

bool check(int x, int y, int size){
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(arr[i][j] != arr[x][y]) return false;
        }
    }
    return true;
}

void recur(int x, int y, int z){
    if(check(x, y, z)){
        ans += arr[x][y];
        return;
    }
    int n = z / 2;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            recur(x+i*2, y+i*2, n);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    recur(0, 0, N);
    cout << ans;
}