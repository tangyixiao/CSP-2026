#include<bits/stdc++.h>
using namespace std;
int vis[200005];
long long ans=-1e6;
long long n,m,a[200005],s[200005];
void dfs(long long k){
	if(k==m+1){
		long long sum=s[1];
		for(int i=2;i<=m;i++){
			sum&=s[i];
		}
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			s[k]=a[i];
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
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
	cout<<ans;
}
