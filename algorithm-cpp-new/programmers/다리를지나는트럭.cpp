#include <bits/stdc++.h>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int ans = 0;
    int next = 0;
    int sum = 0;
    queue<int> Q;

    for (int i = 0; i < bridge_length; i++)
        Q.push(0);

    while (!Q.empty()) {
        ans++;
        sum -= Q.front();
        Q.pop();

        // 대기 트럭이 있는 경우
        if (next < truck_weights.size()) {
            if (sum + truck_weights[next] <= weight) {
                sum += truck_weights[next];
                Q.push(truck_weights[next]);
                next++;
            }
            else {
                Q.push(0);
            }
        }

    }
    return ans;
}