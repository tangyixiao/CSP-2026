#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+9,M=3e5+9;
ll a[N],to[M],cntval[M],fa[N],cnt[N];
vector<int> sons[N];
void dfs(int u,int fa){
    for(int i = 0;i < sons[u].size();i++){
        int v=sons[u][i];
        dfs(v,u);
    }
    cntval[fa]+=cntval[u];
    cnt[u]+=cntval[u];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)cin>>a[i];
    if(n<=5000 || m<=3000){
        for(int i = 1;i <= n;i++)to[a[i]]=i;
        for(int l = 1;l <= n;l++){
            for(int i = l;i <= n;){
                i=to[a[i]];
                cnt[a[i]]++;
                i++;
            }
        }
        for(int i = 1;i <= m;i++)cout<<cnt[i]<<" ";
    }
    else{
        int rt=0;
        for(int i = 1;i <= n;i++){
            to[a[i]]=i;
            cntval[a[i]]++;
        }
        for(int v = 1;v <= m;v++){
            if(to[v]==n)rt=v;
            else fa[v]=a[to[v]+1];
        }
        for(int i = 1;i <= m;i++){
            sons[fa[i]].push_back(i);
        }
        dfs(rt,0);
        for(int i = 1;i <= m;i++)cout<<cnt[i]<<" ";
    }
    return 0;
}
