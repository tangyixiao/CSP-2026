#include<bits/stdc++.h>
#define ll long long
#define up(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define dn(i,a,b,c) for(ll i=a;i>=b;i-=c)

using namespace std;
ll n,m;
ll a[200005];
ll ans=0;
bool vis[200005]={};
inline void dfs(ll now,ll x){
	if(now==m){
		ans=max(ans,x);
		return;
	}
	up(i,1,n,1){
		if(vis[i])continue;
		vis[i]=1;
		dfs(now+1,(x&a[i]));
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	up(i,1,n,1){
		cin>>a[i];
	}
	up(i,1,n,1){
		vis[i]=1;
		dfs(1,a[i]);
		vis[i]=0;
	}
	cout<<ans<<endl;
	return 0;
}
