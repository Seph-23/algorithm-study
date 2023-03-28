#include <bits/stdc++.h>
using namespace std;

int n, k;
int food[110];
int uni[110][110];
int jini[110][110];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> food[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >> uni[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >> jini[i][j];
        }
    }


}