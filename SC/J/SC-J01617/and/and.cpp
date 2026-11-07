#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int n,m;
int a[200010];
int maxx;
bool flag;
bool vis[200010];
void dfs(int cnt,int wy){
	if(cnt==m){
		maxx=max(maxx,wy);
		return;
	}
	for(int i=1;i<=n;++i){
		if(vis[i]) continue;
		vis[i]=1;
		dfs(cnt+1,wy&a[i]);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	if(m==1){
		int maxx=0;
		for(int i=1;i<=n;++i){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==2){
		int maxx=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(i!=j) maxx=max(maxx,(a[i]&a[j]));
			}
		}
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;++i) dfs(0,a[i]);
	cout<<maxx;
	return 0;
}