#include <bits/stdc++.h>
using namespace std;

const int MX = 20000010;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] = x;
}

void pop(){
    if(head == tail) {
        cout << "-1" << '\n';
    } else {
        cout << dat[head++] << '\n';
    }
}

void front(){
    if(head == tail){
        cout << "-1" << '\n';
    } else {
        cout << dat[head] << '\n';
    }
}

void back(){
    if(head == tail){
        cout << "-1" << '\n';
    } else {
        cout << dat[tail - 1] << '\n';
    }
}

void size(){
    cout << tail - head << '\n';
}

void empty(){
    if(head == tail) {
        cout << '1' << '\n';
    } else {
        cout << '0' << '\n';
    }
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    for(int i=0; i<N; i++){
        string s; cin >> s;
        if (s == "push") {
            int x; cin >> x;
            push(x);
        } else if (s == "pop") {
            pop();
        } else if (s == "size") {
            size();
        } else if (s == "empty") {
            empty();
        } else if (s == "front") {
            front();
        } else {
            back();
        }
    }
}