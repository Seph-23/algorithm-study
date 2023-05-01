#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a[4] = {1, 2, 3, 4};
    do{
        for(int i=0; i<4; i++) cout << a[i];
        cout << '\n';
    }while(next_permutation(a, a+2));
}