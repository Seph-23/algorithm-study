#include <bits/stdc++.h>
using namespace std;

/**
 *  에라토스테네스의 체
 */
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int isPrime[1000010];
    isPrime[1] = 0;
    for(int i=2; i<=N; i++) isPrime[i]=1;

    for(int i=2; i*i<=N; i++){
        if(isPrime[i]==0) continue;
        for(int j=i*i; j<=N; j+=i) isPrime[j]=0;
    }

    for(int i=1; i<=N; i++){
        if(isPrime[i] == 1) cout << i << ' ';
    }
}