#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b; cin >> a >> b;
    int ans=0;
    int range = min(a, b);
    for(int i=range; i>0; i--){
        if(a%i==0 && b%i==0) {
            ans = i;
            break;
        }
    }
    cout << "최대공약수는 "<< ans << "입니다.";
}