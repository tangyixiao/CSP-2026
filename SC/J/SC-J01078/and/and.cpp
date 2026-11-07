#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
bool v[200005];
void dfs(int j,int s) {
	if(j==m) {
		ans=max(ans,s);
		return;
	}
	for(int i=1; i<=n; i++) {
		if(!v[i]) {
			v[i]=1;
			dfs(j+1,s&a[i]);
			v[i]=0;
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
	}
	dfs(0,INT_MAX);
	cout<<ans<<"\n";
	return 0;
}