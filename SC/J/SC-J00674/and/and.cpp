#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int dfs(int c,int d){
	if(c==m){
		return a[d];
	}
	int mx=0;
	for(int i=d+1;i<=n-m+c-1;i++){
		mx=max(mx,a[d]&dfs(c+1,i));
	}
	return mx;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n-m+1;i++){
		ans=max(ans,a[i]&dfs(2,i+1));
	}
	cout<<ans;
	return 0;
}