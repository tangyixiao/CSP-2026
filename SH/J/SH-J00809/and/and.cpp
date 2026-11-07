#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
int n,m,a[200005];
void dfs(int x,ll anss,int c){
	if(c==m){
		anss=anss&a[x];
		ans=max(anss,ans);
		return;
	}
	anss=anss&a[x];
	for(int i=x+1;i<=n-m+c+1;i++){
		dfs(i,anss,c+1);
	}
	return;
}
int main(){
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++){
		dfs(i,a[i],1);
	}
	cout<<ans;
	return 0;
}
