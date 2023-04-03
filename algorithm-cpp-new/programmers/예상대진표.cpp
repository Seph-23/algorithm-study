#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;

    int mn = min(a, b);
    int mx = max(a, b);

    while(mx-mn!=1 || (mx-mn==1 && mn%2==0)){
        if(mx%2==1) mx = (mx+1)/2;
        else mx /= 2;
        if(mn%2==1) mn = (mn+1)/2;
        else mn /= 2;
        answer++;
    }

    return answer;
}