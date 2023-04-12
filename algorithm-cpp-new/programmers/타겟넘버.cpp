#include <string>
#include <vector>

using namespace std;

int answer;

void recur(int target, int sum, int cnt, vector<int> &numbers){
    if(cnt == numbers.size()){
        if(sum == target){
            answer++;
        }
        return;
    }
    recur(target, sum+numbers[cnt], cnt+1, numbers);
    recur(target, sum-numbers[cnt], cnt+1, numbers);
}

int solution(vector<int> numbers, int target) {
    recur(target, 0, 0, numbers);
    return answer;
}