#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    int arr[1010];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}