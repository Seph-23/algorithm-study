#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
struct info{
    int y,x;
};
int arr[45][15];
int num,answer=0;

void dfs(int cnt, int sum){
    bool check[15][15]={false,};
    int dup[45][15];
    memcpy(dup,arr,sizeof(arr));
    for(int i=2*num;i<3*num;i++){
        for(int j=0;j<num;j++){
            int val = dup[i][j];
            if(val==0 || check[i-2*num][j]) continue;
            memcpy(arr,dup,sizeof(arr));
            int minX = j;
            int maxX = j;
            int minY = i;
            int maxY = i;
            queue<info> q;
            int same = 1;
            q.push({i,j});
            check[i-2*num][j]=true;
            while(!q.empty()){
                int cx = q.front().x;
                int cy = q.front().y;
                //빈 처리
                arr[cy][cx]=0;
                q.pop();
                minX = min(minX,cx);
                maxX = max(maxX,cx);
                minY = min(minY,cy);
                maxY = max(maxY,cy);
                for(int k=0;k<4;k++){
                    int nx = cx+dx[k];
                    int ny = cy+dy[k];
                    if(nx>=0 && ny>=2*num &&nx<num && ny<3*num && !check[ny-2*num][nx] && dup[ny][nx]==val){
                        check[ny-2*num][nx]=true;
                        q.push({ny,nx});
                        same++;
                    }
                }
            }
            if(cnt<2){   
                for(int k=minX;k<=maxX;k++){
                    for(int m=maxY;m>=minY;m--){
                        if(arr[m][k]!=0) continue;
                        int jump=0;
                        for(int l=m-1;l>=0;l--){
                            if(arr[l][k]){
                                jump=m-l;
                                break;
                            }
                        }
                        if(jump){
                            for(int l=m;l>=jump;l--){
                                arr[l][k]=arr[l-jump][k];
                                arr[l-jump][k]=0;
                            }
                        }
                    }
                }
                dfs(cnt+1,sum+same+(maxX-minX+1)*(maxY-minY+1));
            }
            else{
                answer = max(answer, sum+same+(maxX-minX+1)*(maxY-minY+1));
                continue;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>num;
    for(int i=0;i<3*num;i++)
        for(int j=0;j<num;j++)
            cin>>arr[i][j];
    dfs(0,0);
    cout<<answer;
    return 0;
}