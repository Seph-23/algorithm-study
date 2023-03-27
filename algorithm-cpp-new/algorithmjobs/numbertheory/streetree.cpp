#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100010];

//a와 b의 최대공약수를 반환하는 함수
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

    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    int gcd = 0;
    for(int i=0; i<n-1; i++){
        int dist = arr[i+1] - arr[i];

        if(i==0) gcd = dist;
        else gcd = getGCD(gcd, dist);
    }

    int totalTree = (arr[n-1] - arr[0]) / gcd + 1;
    cout << totalTree - n << '\n';
}