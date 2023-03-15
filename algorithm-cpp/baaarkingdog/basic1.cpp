#include <bits/stdc++.h>

using namespace std;

int func1(int N) {
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int func2(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == 100) {
                return 1;
            }
        }
    }
    return 0;
}

int func3(int N) {
    for (int i = 1; i * i <= N; i++) {
        if (i * i == N) {
            return 1;
        }
    }
    return 0;
}

int func4(int N) {
    int tmp = 1;
    for (int i = 1; pow(i, 2) < N; i++) {
        if (pow(2, i) < N) {
            tmp = pow(2, i);
        }
    }
    return tmp;
}

int func4ans(int N) {
    int val = 1;
    while (2 * val <= N) {
        val *= 2;
    }
    return val;
}

int main() {
    cout << func1(27639) << endl;

    int arr[] = {4, 13, 63, 87};
    cout << func2(arr, 4) << endl;
    int arr2[] = {50, 42};
    cout << func2(arr2, 2) << endl;

    cout << func3(693953651) << endl;

    cout << func4(97615282) << endl;

    cout << func4ans(97615282) << endl;
}
