#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

//    int arr[21];
//    fill(arr, arr+21, 10);
//    for(int i=0; i<21;i++) cout << arr[i] << " ";
//
//    vector<int> v1(3, 5);  //{5,5,5};
//    cout << v1.size() << '\n';      // 3
//    v1.push_back(7);                // {5,5,5,7};
//
//    vector<int> v2(2);          //{0,0}
//    v2.insert(v2.begin()+1, 3);     //{0,3,0;
//
//    vector<int> v3 = {1,2,3,4};             //{1,2,3,4}
//    v3.erase(v3.begin()+2);         //{1,2,4}
//
//    vector<int> v4;             //{}
//    v4 = v3;            //{1,2,4}

    vector<int> v1 = {1,2,3,4,5,6};

    for(int a : v1) cout << a << ' ';               //range-based for loop

    for(int i=0; i<v1.size(); i++) cout << v1[i] << ' ';        //not bad

    for(int i=0; i<=v1.size()-1; i++) cout << v1[i] << ' ';         //WRONG
}