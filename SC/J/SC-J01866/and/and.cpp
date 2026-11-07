#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e3+5;
int n,m,a[maxn],dp[maxn][maxn],ans;
void dfs(int u,int x,int z){
	if(u==n||x==m){
		if(u==n&&x==m){
			ans=max(ans,z);
		}
		return ;
	}
	dfs(u+1,x,z);
	dfs(u+1,x+1,z&a[u]);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7

*/