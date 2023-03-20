#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    list<int> list = {1,2};         // 1 2
    list<int>::iterator t = list.begin();           //t는 1을 가리키는 중
    list.push_front(10);            //10 1 2
    cout << *t << '\n';         //t가 가리키는 값 = 1을 출력
    list.push_back(5);          //10 1 2 5
    list.insert(t, 6);      //t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    t++;            //t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    t = list.erase(t);          //t가 가리키는 값을 제거, 그다음 원소인 5의 위치를 반환 10 6 1 5, t가 가리키는 값은 5
    cout << *t << '\n';     //5

    for(auto i : list) cout << i << ' ';
    cout << '\n';
    for(list<int>::iterator it = list.begin(); it != list.end(); it++)
        cout << *it << ' ';
}