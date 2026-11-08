#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],annns,vis[200001],ans1,ans2;
void dfs(int ans,int mm) {
	if(mm>m) {
		annns=max(ans,annns);
		return;
	}
	int anns=ans;
	for(int i=1; i<=n; i++) {
		if(vis[i]==0) {
			if(mm==1) {
				ans=a[i];
			} else {
				ans&=a[i];
			}
			vis[i]=1;
			dfs(ans,mm+1);
			vis[i]=0;
			ans=anns;
		}
	}
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		ans1=max(ans1,a[i]);
		ans2&=a[i];
	}
	if(m==1) {
		cout<<ans1;
		return 0;
	}
	if(m==n) {
		cout<<ans2;
		return 0;
	}
	dfs(1,1);
	cout<<annns;
	return 0;
}
