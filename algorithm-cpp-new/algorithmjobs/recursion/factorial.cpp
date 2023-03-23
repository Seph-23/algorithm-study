#include <bits/stdc++.h>
using namespace std;

int getFactorial(int x){
    if(x<=1) return 1;
    else return x * getFactorial(x - 1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << getFactorial(5) << '\n';
}