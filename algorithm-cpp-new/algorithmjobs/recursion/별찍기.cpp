#include <bits/stdc++.h>
using namespace std;

void recur(int star){
    if(star==0) return;
    recur(star-1);
    for (int i = 0; i < star; i++) cout << '*';
    cout << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    recur(10);
}