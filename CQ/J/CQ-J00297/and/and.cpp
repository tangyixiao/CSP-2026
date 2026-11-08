#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans=-1;
void dfs(int x,int mx,int cnt){
	if(cnt==m){
		ans=max(ans,mx);
		return;
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,mx&a[i],cnt+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i,a[i],1);
	}
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7

4 2
3 15 12 12
*/
