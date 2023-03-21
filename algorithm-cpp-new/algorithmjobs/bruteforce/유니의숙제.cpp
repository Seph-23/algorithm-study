#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b; cin >> a >> b;
    for(int x=-1000; x<=1000; x++){
        if(x*x + 2*a*x + b == 0){
            cout << x << ' ';
        }
    }
}