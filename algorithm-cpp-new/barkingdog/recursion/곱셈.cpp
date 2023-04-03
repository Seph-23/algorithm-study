#include <bits/stdc++.h>
using namespace std;

long long powpow(int a, int b, int c){
    if(b==1) return a % c;
    long long val = powpow(a, b/2, c);
    val = val * val % c;
    if(b % 2 == 0) return val;
    return val * a % c;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a, b, c;
    cin >> a >> b >> c;
    cout << powpow(a, b, c);
}