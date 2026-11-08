#include<bits/stdc++.h>
#define int long long
#define N 200005
using namespace std;

int n,m;

int a[N];

bool vis[N];

int ans;

void dfs(int d,int l){
	if(d==m){
		ans=max(ans,l);
		return ;
	}
	for(int i=0;i<n;i++){
		if(vis[i]) continue;
		vis[i]=true;
		dfs(d+1,(l&a[i]));
		vis[i]=false;
	}
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	dfs(0,INT_MAX);
	cout<<ans;
	return 0;
}
