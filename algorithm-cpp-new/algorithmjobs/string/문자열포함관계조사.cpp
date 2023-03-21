#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b; cin >> a >> b;
    bool ans = false;
    for(int i=0; i<a.length(); i++){
        int idx1 = i;
        int idx2 = 0;
        if(a[idx1] == b[idx2]){
            for(int j=0; j<b.length(); j++){
                if(a[idx1] == b[idx2]){
                    idx1++;
                    idx2++;
                    if(b.length() == idx2){
                        ans = true;
                        break;
                    }
                }
            }
        }
    }
    if(ans) cout << "YES";
    else cout << "NO";
}