#include<bits/stdc++.h>
const long long N=5e5+5;
long long n,m,cnt,a[N],b[N],mp[N],sz[N],ans[N];
std::vector<long long> edge[N];
void dfs(long long u){
    sz[u]=1;
    for(long long v:edge[u]){
        dfs(v);
        sz[u]+=sz[v];
    }
    if(b[u]){
        ans[b[u]]+=sz[u];
    }
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for(long long i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(long long i=n;i>=1;i--){
        if(mp[a[i]]){
            edge[mp[a[i]]].push_back(i);
            b[i]=0;
        }
        else b[i]=a[i],edge[i+1].push_back(i);
        mp[a[i]]=i;
    }
    dfs(n);
    for(long long i=1;i<=m;i++)printf("%lld ",ans[i]);
    printf("\n");
}