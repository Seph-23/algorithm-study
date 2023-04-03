#include <bits/stdc++.h>
using namespace std;


void func1(int n){
    if(n == 0) return;
    cout << n << ' ';
    func1(n-1);
}

int fibo(int n){
    if (n <= 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    func1(5);
}