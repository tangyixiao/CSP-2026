#include <bits/stdc++.h>
using namespace std;
int n,m,t[31],cnt,add,a[200001],ans;
bool vis[200001],q[31];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",a+i);
        for(int j=0;j<=30;j++)if((a[i]>>j)&1)t[j]++;
    }
    for(int i=0;i<=30;i++)if(t[i]>=m)q[i]=1;
    cnt=n;
    for(int i=30;i>=0;i--){
        if(!q[i])continue;
        add=0;
        vector<int>e;
        for(int j=1;j<=n;j++){
            if(vis[j])continue;
            if(!((a[j]>>i)&1))vis[j]=1,e.emplace_back(j),add++;
        }
        if(cnt-add<m)for(auto x:e)vis[x]=0;
        else cnt-=add;
        if(cnt==m)break;
    }
    ans=(1<<30)-1,cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i])ans&=a[i],cnt++;
        if(cnt==m)break;
    }
    printf("%d",ans);
    return 0;
}