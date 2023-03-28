#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> p{1,2,3,4};
    vector<int> v{1,1,1,0};
    do {
        for(int i=0;i<4;i++)
            if(v[i]) cout << p[i] << ' ';
        cout << '\n';
    }while(prev_permutation(v.begin(),v.end()));
    return 0;
}