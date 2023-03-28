#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100010];
int temp[100010];

//합병정렬 재귀함수
void sort(int s, int e){
    int mid = (s + e) / 2;
    int l, r;
    int idx = 0;

    if(s >= e) return;

    sort(s, mid);       //왼쪽 정렬 : 왼쪽을 계속 반으로 나눈다.
    sort(mid+1, e);     //오른쪽 정렬 : 오른쪽을 계속 반으로 나눈다.

    l = s;
    r = mid+1;

    while(l <= mid && r <= e){      //작은 값들을 뽑아 정렬하기, 단 양쪽에 수가 있는 동안
        if(arr[l] < arr[r]) temp[idx++] = arr[l++];
        else temp[idx++] = arr[r++];
    }

    while(l <= mid) temp[idx++] = arr[l++];     //오른쪽 수열이 다 뽑히면 왼쪽 수열의 나머지 합치기
    while(r <= e) temp[idx++] = arr[r++];       //왼쪽 수열이 다 뽑히면 오른쪽 수열의 나머지 합치기

    //정렬된 수열이 모두 뽑히면 arr에 덮어 쓴다.
    for(int i=0; i<idx; i++) arr[s+i] = temp[i];            //정렬할 수열의 첫번째 인덱스는 s이다.
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(0, n-1);

    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}