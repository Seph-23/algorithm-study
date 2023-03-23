#include <bits/stdc++.h>
using namespace std;

int N;

void recur(int line){
    if(line == N+1) return;

    for (int i = 0; i < N - line; i++) cout << ' ';
    for(int i=0; i<2*line-1; i++) cout << '*';
    cout << '\n';

    recur(line+1);      //재귀 전은 정방향 출력, 재귀 후는 역방향 출력

    if(line==N) return;

    for (int i = 0; i < N - line; i++) cout << ' ';
    for (int i = 0; i < 2 * line - 1; i++) cout << '*';
    cout << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N;
    recur(1);
}