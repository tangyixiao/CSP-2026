#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans;
void dfs(int dep,int used,long long now){
	//cout<<dep<<' '<<used<<' '<<now<<' '<<a[dep]<<'\n';
	if(dep==n+1){
		if(used==m) ans=max(ans,now);
		return ;
	}
	if(n+1-dep<m-used) return;
	dfs(dep+1,used,now);
	if(now!=-1) dfs(dep+1,used+1,now&a[dep]);
	else dfs(dep+1,used+1,a[dep]);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	dfs(1,0,-1);
	cout<<ans; 
	return 0;
}
