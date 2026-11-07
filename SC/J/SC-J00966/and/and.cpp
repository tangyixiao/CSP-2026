#include<bits/stdc++.h>
using namespace std;
int const N=2e8+10;
int n,m,a[N],cnt,mx,vis[N];
string s;
void dfs(int u,int x){
	if(u>=m){
		mx=max(mx,x);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		dfs(u+1,x&a[i]);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
		vis[i]=0;
	}
	cout<<mx;
	return 0;
}