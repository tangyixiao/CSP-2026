#include<bits/stdc++.h>

using namespace std;
const int N=5e5+5;
int now[N],pre[N],n,a[N],cnt[N],ans[N],bj[N],en[N],m;
int dfs(int x){
    
    int sum=0;
    for(int i=x;i>=1;i=pre[i]) {
        if(i==0) continue;
        if(i>1&&en[a[i-1]]==i-1&&pre[i]!=i-1)sum+=dfs(i-1);
        ++sum;
        // cout<<x<<' '<<i-1<<' '<<pre[i]<<'\n';
    }
    // cout<<a[x]<<' '<<x<<'\n';
    return ans[a[x]]=sum;
}
signed main() {
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) 
        pre[i]=now[a[i]],now[a[i]]=i,en[a[i]]=i;
    // for(int i=1;i<=n;i++) cout<<pre[i]<<" \n"[i==n];
    dfs(n);
    for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
    cout<<'\n';
    return 0;
}