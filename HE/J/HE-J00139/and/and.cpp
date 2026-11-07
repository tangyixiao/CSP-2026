#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
ll a[200005],n,m,ans=-10000000;
bool use[200005];
void dfs(ll pos,ll sum){
	if(pos>m){
		ans=max(sum,ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!use[i]){
			use[i]=true;
			dfs(pos+1,sum&a[i]);
			use[i]=false;
		}
	}
}
int main(){
	ios::sync_with_stdio();
	cin.tie();
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		dfs(1,a[i]);
	}
	cout<<ans<<endl;
	return 0;
}
