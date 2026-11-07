#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[500005],ans[500005];
bool vis[500005],fi[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",a+i),cnt[a[i]]++;
    for(int i=n;i;i--)
        if(!vis[a[i]])
            vis[a[i]]=1,fi[i]=1;
    for(int i=1;i<=n;i++)
        if(fi[i])
            ans[a[i]]+=cnt[a[i]],
            ans[a[i+1]]+=ans[a[i]];
    for(int i=1;i<=m;i++)
        printf("%d ",ans[i]);
}