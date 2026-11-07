#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=200010;
int a[N],b[N];
int res;
bool vis[N];
void dfs(int d,int u,int r){
	if(d==m+1){
		res=max(res,r);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		dfs(d+1,i,r&a[u]);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1)cout<<mx;
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j)
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m==n){
		int ans;
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else{
		dfs(1,1,2147483647);
		cout<<res;
	}
	return 0;
}