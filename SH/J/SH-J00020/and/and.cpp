#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;
ll a[200005],maxn;
bool vis[200005];
int ans[200005];
void dfs(int dep){
	if(dep==m+1){
		ll res=a[ans[1]];
		for(int i=2;i<=m;i++){
			res=res&a[ans[i]];
		}
		maxn=max(maxn,res);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		ans[dep]=i;
		vis[i]=true;
		dfs(dep+1);
		vis[i]=false;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<maxn;
	
	return 0;
}
