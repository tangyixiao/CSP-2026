#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=1e6+5;

ll n,m,t,r,mx;
ll an[N],a[N],b[N],las[N],sz[N];
vector<ll>g[N];

void lk(ll u,ll v){
    if(u>v) swap(u,v);
    g[u].push_back(v);
    g[v].push_back(u);
}

void dfs(ll u,ll fa){
    sz[u]=1;    b[a[u]]++;
    for(auto v:g[u]){
        if(v==fa)   continue;
        dfs(v,u);
        sz[u]+=sz[v];
    }
    b[a[u]]--;
    if(!b[a[u]]){
        an[a[u]]+=sz[u];
    }
}

int main(){
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
    for(int i=n;i>0;i--){
        cin>>a[i];
    }
    las[a[1]]=1;
    for(int i=2;i<=n;i++){
        if(!las[a[i]])  lk(i,i-1),las[a[i]]=i;
        else    lk(las[a[i]],i),las[a[i]]=i;
    }
    dfs(1,0);
	for(int i=1;i<=m;i++){
        cout<<an[i]<<" ";
    }
    cout<<"\n";
	return 0;
}
