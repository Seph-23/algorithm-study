#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;

    long long arr[2010];
    arr[0] = 1;
    arr[1] = 2;
    for(long long i=2; i<=n; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 1234567;
    }

    return arr[n-1];
}