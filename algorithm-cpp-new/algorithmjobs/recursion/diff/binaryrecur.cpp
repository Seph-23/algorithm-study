#include <bits/stdc++.h>
using namespace std;

void binary(int n){
    if(n==0) return;

    binary(n/2);
    cout << n%2;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    binary(n);
}