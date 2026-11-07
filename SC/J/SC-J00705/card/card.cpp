#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],b[N],siz[N];
vector<int>e[N];
int lst[N],ans[N];
void dfs(int u){
    siz[u]=1;
    for(int v:e[u]){
        dfs(v);
        siz[u]+=siz[v];
    }
    if(b[u])ans[b[u]]+=siz[u];
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=n;i>=1;--i){
        if(lst[a[i]])e[lst[a[i]]].push_back(i);
        else{
            if(i!=n)e[i+1].push_back(i);
            lst[a[i]]=i;
            b[i]=a[i];
        }
    }
    dfs(n);
    for(int i=1;i<=m;++i)cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}
