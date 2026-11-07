#include<bits/stdc++.h>
const int N=5e5+11;
using namespace std;
int n,m;
int a[N];
int fa[N],vis[N],book[N];
vector<int> v[N];
int siz[N];
int ans[N];
void dfs(int x){
    siz[x]=1;
    for(int i=0;i < (int)v[x].size();i++){
        int y=v[x][i];
        dfs(y);
        siz[x]+=siz[y];
    }
    if(book[x]){
        ans[a[x]]=siz[x];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i <= n;i++){
        cin>>a[i];
    }
    for(int i=n;i > 0;i--){
        if(!vis[a[i]]){
            vis[a[i]]=i;
            book[i]=1;
            if(i<n)v[i+1].push_back(i);
        }else{
            v[vis[a[i]]].push_back(i);
            vis[a[i]]=i;
        }
    }
    dfs(n);
    for(int i=1;i <= m;i++){
        cout<<ans[i]<<" ";
    }
    // cout<<"\n";
    return 0;  
}