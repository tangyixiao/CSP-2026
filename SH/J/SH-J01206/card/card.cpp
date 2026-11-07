#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[500005];
queue<int> q1,q2;
bool have[500005];
int cnt[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        for(int i=j;i<=n;i++){
            int x=a[i];
            if(!have[x]){
                q1.push(x);
                have[x]=1;
            }else{
                while(!q1.empty()){
                    int y=q1.front();
                    q1.pop();
                    if(y!=x){
                        q2.push(y);
                    }else{
                        break;
                    }
                }
                while(!q1.empty()){
                    int y=q1.front();
                    q1.pop();
                    have[y]=0;
                }
                while(!q2.empty()){
                    int y=q2.front();
                    q2.pop();
                    q1.push(y);
                }
                q1.push(x);
                have[x]=1;
            }
        }
        while(!q1.empty()){
            q1.pop();
        }
        while(!q2.empty()){
            q2.pop();
        }
        for(int i=1;i<=m;i++){
            if(have[i]){
                cnt[i]++;
            }
        }
    }
    for(int i=1;i<=m;i++){
        cout<<cnt[i]<<' ';
    }
    return 0;
}
