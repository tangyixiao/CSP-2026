#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector
ll n,m;
vec<ll>a;
vec<bool>vis;
void dfs(ll t){
	
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	a.resize(n+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	vis.resize(n+1);
	for(ll i=1;i<=n;i++){
		vis[i]=1;
		dfs(i);
		vis[i]=0;
	}
	return 0;
}

