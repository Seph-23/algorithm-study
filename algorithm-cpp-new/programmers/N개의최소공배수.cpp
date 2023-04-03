#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-1; i++){
        arr[i+1] = lcm(arr[i], arr[i+1]);
    }

    return arr[arr.size()-1];
}