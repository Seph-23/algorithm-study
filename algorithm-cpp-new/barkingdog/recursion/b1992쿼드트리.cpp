#include <bits/stdc++.h>
using namespace std;

string arr[70][70];
string ans;

void recur(int x, int y, int size){
    if(size == 1){
        cout << arr[x][y];
        return;
    }
    bool zero = true, one = true;
    for(int i=y; i<y+n; i++){}
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        for(int j=0; j<N; j++)
            arr[i][j] = s[j]-'0';
    }
    recur(0, 0, N);
}