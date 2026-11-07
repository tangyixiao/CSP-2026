#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,a[200005];
int vis[200005];
int dfs(int k,int d,int b){
	vis[k]=1;
	if(d==m)return b;
	int mx=-100000;
	for(int i=1;i<=n;i++){
		if(i==k)continue;
		mx=max(dfs(i,d+1,b&a[i]),mx);
	}
	return mx;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	int mx=-100000;
	for(int i=1;i<=n;i++){
		mx=max(dfs(i,1,a[i]),mx);
	}
	cout<<mx;
}