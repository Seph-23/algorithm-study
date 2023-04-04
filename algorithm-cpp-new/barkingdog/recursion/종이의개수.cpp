#include <bits/stdc++.h>
using namespace std;

int N;
int arr[2200][2200];
int cnt[3];     //-1, 0, 1

bool check(int size, int x, int y){
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(arr[i][j] != arr[x][y]) return false;
        }
    }
    return true;
}

void recur(int x, int y, int z){
    if(check(z, x, y)){
        cnt[arr[x][y] + 1] += 1;            //-1->0,  0->1,  1->2
        return;
    }
    int n = z / 3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            recur(x + i * n, y + j * n, n);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    recur(0, 0, N);
    for(int i=0; i<3; i++){
        cout << cnt[i] << '\n';
    }
}