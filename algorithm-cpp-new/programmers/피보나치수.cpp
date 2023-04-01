#include <bits/stdc++.h>

long long arr[1000100];

int solution(int n) {
    arr[0] = 0;
    arr[1] = 1;
    for(long long i=2; i<=n; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 1234567;
    }
    return arr[n];
}