#include <bits/stdc++.h>

using namespace std;

string ntok(int n, int k){
    string tmp;
    while(n != 0){
        tmp.push_back((n%k)+'0');
        n /= k;
    }
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

bool isPrime(long long n){
    if(n < 2) return false;
    for(long long i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;

    string con = ntok(n, k);

    string tmp = "";
    for(int i=0; i<con.size(); i++){
        if(con[i] != '0'){
            tmp.push_back(con[i]);
        }
        if(con[i] == '0' && !tmp.empty()){
            if(isPrime(stol(tmp))) answer++;
            tmp = "";
        }
    }
    if(!tmp.empty()){
        if(isPrime(stol(tmp))) answer++;
    }
    return answer;
}