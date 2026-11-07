#include<bits/stdc++.h>
using namespace std;
int a[200005],vis[200005];
int n,m;
long long ans;
void dfs(long long nans,int step) {

	if(step==m+1) {
//	cout<<nans<<endl;;
		ans=max(ans,nans);
		return;
	}
	for(int i=1; i<=n; i++) {
		if(vis[i]==0) {
			vis[i]=1;
			dfs(nans&a[i],step++);
			vis[i]=0;
		}
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			//cout<<ans;
			ans&=a[i];
		}
		cout<<ans;return 0;
	}if(m==1){
		for(int i=1;i<=n;i++){
			if(ans<i)ans=a[i];
		}
		cout<<ans;return 0;
	}
	for(int i=1; i<=n; i++) {
		vis[1]=1;
		dfs(a[1],1);
		vis[1]=0;
	}
	cout<<ans;
	return 0;
}
