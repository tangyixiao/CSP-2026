#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5e5+10;
bool type[N];
bool vis[N];
ll fst[N];
ll a[N];
ll sum=0;
vector <ll> es[N]; 
ll sz[N]; 
ll ans[N];
void dfs(ll x,ll fa){
	sz[x]=1;
	for(ll i=0;i<es[x].size();i++){
		if(es[x][i]!=fa){
			dfs(es[x][i],x);
			sz[x]+=sz[es[x][i]];
		}
	}
}
void dfs2(ll x,ll fa){
	if(type[x]==true){
		ans[a[x]]+=sz[x];
	}
	for(ll i=0;i<es[x].size();i++){
		if(es[x][i]!=fa){
			dfs2(es[x][i],x);
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin >> n >> m;
	for(ll i=1;i<=n;i++){
		cin >> a[i];
	}
	for(ll i=n;i>=1;i--){
		if(!vis[a[i]]){
			vis[a[i]]=true;
			type[i]=true;
			fst[a[i]]=i;
		}
	}
	for(ll i=1;i<=n;i++){
		if(type[i]==true){
			es[i].push_back(i+1);
			es[i+1].push_back(i);
		}else{
			es[i].push_back(fst[a[i]]);
			es[fst[a[i]]].push_back(i);
		}
	}
	dfs(n+1,0);
	dfs2(n+1,0); 
	for(ll i=1;i<=m-1;i++){
		cout << ans[i] << " ";
	}
	cout << ans[m];
	return 0;
}
