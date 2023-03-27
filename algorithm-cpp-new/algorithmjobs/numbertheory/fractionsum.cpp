#include <bits/stdc++.h>
using namespace std;

int a1,a2,b1,b2;        // a1/a2 , b1/b2
int r1, r2;

int getGCD(int a, int b){
    while(true){
        int c = a % b;
        if(c==0) return b;
        a = b;
        b = c;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> a1 >> a2 >> b1 >> b2;
    r1 = ((a2*b2)/a2)*a1 + ((a2*b2)/b2)*b1;
    r2 = a2 * b2;

    while(getGCD(r1, r2) != 1){
        int c = getGCD(r1, r2);
        r1 /= c;
        r2 /= c;
    }

    cout << r1 << ' ' << r2;
}