#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, s; cin >> n >> s;
    int prevFirst, prevLast, number=1;        //number 는 해당 줄에 출력해야하는 숫자 갯수

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++) cout << ' ';

        //짝수열 증가하면서 출력
        if(i % 2 == 0) {
            int currFirst = prevFirst + 1;
            if(currFirst >= 10) currFirst = 1;
            for(int j=0; j<number; j++){
                cout << currFirst;
                prevLast = currFirst;       //짝수줄에서 맨 마지막에 출력한 숫자 저장
                currFirst++;
                if(currFirst >= 10) currFirst=1;
            }
        } else {        //홀수 줄 감소하면서 출력
            int currFirst;

            if(i==1) currFirst=s;
            else{
                currFirst = prevLast;
                for(int j=0; j<number; j++){
                    currFirst++;
                    if(currFirst >= 10) currFirst=1;
                }
            }

            prevFirst = currFirst;          //다음 짝수줄에서 사용해야할 첫번째 숫자 저장
            for(int j=0; j<number; j++){
                cout << currFirst;
                currFirst--;
                if(currFirst <= 0) currFirst=9;
            }
        }
        number+=2;      //다음줄에 출력해야하는 숫자 갯수 증가
        cout << '\n';
    }
}