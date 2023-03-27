#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    while(n != 0){
        int cnt =0;
        for(int i=n+1; i<=n*2; i++){
            bool isPrime = true;
            for(int j=2; j*j<=i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) cnt++;
        }
        cout << cnt << '\n';
        cin >> n;
    }

}