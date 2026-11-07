#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
int vis[200005];
int n,m,ans=-999999;
void dfs(int l,int c){
	if(c==m){
		ans=max(ans,l);
		return;
	}
	if(c!=m){
		for(int i=1;i<=n;i++){
			if(vis[i]!=1){
				vis[i]=1;
				dfs(l&a[i],c+1);
				vis[i]=0;
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(a[i],1);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}