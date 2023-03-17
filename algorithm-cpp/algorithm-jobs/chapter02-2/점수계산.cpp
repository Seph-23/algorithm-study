#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n; int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int prevCorr = 0, total=0;
    for(int i=0; i<n; i++){
        if(prevCorr==0 && arr[i]==1) {
            total++;
            prevCorr++;
        }
        else if(prevCorr>0 && arr[i]==1) {
            total += 1+prevCorr;
            prevCorr++;
        } else {
            prevCorr=0;
        }
    }
    cout << total;
}