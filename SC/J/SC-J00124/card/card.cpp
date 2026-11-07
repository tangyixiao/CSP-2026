#include<bits/stdc++.h>
using namespace std;
int vis[500005],a[500005],b[500005],s[500005],t[500005],n,m,ans[500005];
vector<int> G[500005];
void dfs(int u){
    if(t[a[u]]==0) ans[a[u]]+=s[u];
    t[a[u]]++;
    for(int i=0;i<G[u].size();i++){
        dfs(G[u][i]);
    }
    t[a[u]]--;
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i--){
        b[i]=vis[a[i]];
        vis[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        s[i]++;
        if(b[i]){
            s[b[i]]+=s[i];
            G[b[i]].push_back(i);
        }
        else{
            s[i+1]+=s[i];
            G[i+1].push_back(i);
        }
    }
    dfs(n);
    for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
    return 0;
}