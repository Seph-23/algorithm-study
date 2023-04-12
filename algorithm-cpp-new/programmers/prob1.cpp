#include <bits/stdc++.h>

using namespace std;

double calc(int n) {
    double prob = 1.0;
    int totalCards = 54;    //카드 + 조커 2개
    int shape = 15;         // 13 + 조커 2개

    for (int i = 0; i < n; i++) {
        prob *= (double)(shape - i) / (double)(totalCards - i);
    }

    return prob * 4 * 100;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << "Number of Players : ";
    int n; cin >> n;

    cout << "같은 무늬가 나올 확률: " << calc(n) << "%" << '\n';

    return 0;
}