#include <bits/stdc++.h>
using namespace std;

int n,m;
int win[5005]={};
int arr[5005]={};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        queue<int> que;
        unordered_map<int,bool> on;
        for(int j=i;j<=n;j++){
            int cur=arr[j];

            if(on[cur]){
                queue<int> temp;
                bool flag=false;

                while(!que.empty()){
                    if(que.front()==cur){
                        flag=true;
                    }

                    if(!flag){
                        temp.push(que.front());
                    }else{
                        on[que.front()]=false;
                    }

                    que.pop();
                }

                que=temp;
            }

            on[cur]=true;
            que.push(cur);
        }

        while(!que.empty()){
            int idx=que.front();
            que.pop();

            win[idx]++;
        }
    }

    for(int i=1;i<=n;i++){
        if(win[i]){
            cout<<win[i]<<" ";
        }
    }

    return 0;
}
