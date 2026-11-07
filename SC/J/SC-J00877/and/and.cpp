#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],maxx,ans,c[200005],a2[200005];
bool vis[200005],f;
void dfs(int k){
	if(k>m){
		int b=a[c[1]];
		for(int i=2;i<=m;i++){
			b=b&a[c[i]];
		}
		ans=max(b,ans);
		return ;
	}
	for(int i=c[k-1];i<=n;i++){
		if(vis[i]==false){
			c[k]=i;
			vis[i]=true;
			dfs(k+1);
			vis[i]=false;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a2[i]=a[i]+1;
		if(f==false){
			while(a2[i]>1){
				a2[i]/=2;
			}
			if(a2[i]!=1) f=true;
		}
		maxx=max(a[i],maxx);
	}
	if(f=false){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		for(int i=2;i<=n;i++){
			a[i]=a[i-1]&a[i];
		}
		cout<<a[n];
		return 0;
	}
	c[0]=1;
	dfs(1);
	cout<<ans;
	return 0;
}