#include <bits/stdc++.h>
using namespace std;

int n,m,maxx;
vector<int>a;
void dfs(int val,int now,int cnt){
    if(cnt==m){
        maxx=max(maxx,val);
        return;
    }
    if(val<=maxx) return;
    for(int i=now+1;i<=n;i++){
        dfs((val&a[i]),i,cnt+1);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    a.resize(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        dfs(a[i],i,1);
    }
    cout<<maxx;
    return 0;
}
