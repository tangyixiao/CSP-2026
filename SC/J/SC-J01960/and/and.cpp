#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

long long ans=-1,maxn=-1,m,n,a[200005];

void dfs(long long step,long long i,long long sum){
    if(m-step>n-i+1){
        return ;
    }
    if(step==m){
        ans=max(ans,sum);
        return ;
    }
    dfs(step,i+1,sum);
    if(!step){
        sum=a[i];
        dfs(step+1,i+1,sum);
    }else{
        dfs(step+1,i+1,sum&a[i]);
    }
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxn=max(maxn,a[i]);
    }
    if(m==1){
        cout<<maxn;
    }else if(m==n){
        long long sum=a[1];
        for(int i=1;i<=n;i++){
            sum&=a[i];
        }
        cout<<sum;
    }else if(m==2){
        maxn=-1;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                maxn=max(maxn,a[i]&a[j]);
            }
        }
        cout<<maxn;
    }else if(m==n-1){
        maxn=-1;
        for(int i=1;i<=n;i++){
            long long sum;
            if(i==1){
                sum=a[2];
            }else{
                sum=a[1];
            }
            for(int j=1;j<=n;j++){
                if(j==i){
                    continue;
                }
                sum&=a[j];
            }
            maxn=max(maxn,sum);
        }
        cout<<maxn;
    }else{
        dfs(0,1,0);
        cout<<ans;
    }
    return 0;
}