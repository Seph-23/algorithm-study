#include <bits/stdc++.h>
using namespace std;


/**
 *      nCm = n! / (m! * (n-m)!)
 */
//int factorial(int n){
//    if(n == 1) return 1;
//    return n * factorial(n - 1);
//}
//
//int main() {
//    cin.tie(0)->sync_with_stdio(0);
//
//    cin >> n >> m;
//
//    long long ans = factorial(n) / (factorial(m) * factorial(n - m));
//    cout << ans;
//}

/**
*  위 방법은 아무리 long long을 써도 overflow가 일어난다.
*/

int n, m;
long long ans;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;

    ans = 1;
    for(int i=1; i<=m; i++){
        ans *= n - i + 1;
        ans /= i;
    }

    cout << ans;
}