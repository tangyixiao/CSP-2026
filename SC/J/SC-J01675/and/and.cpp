#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int ans;
void dfs(int cnt,int x,int i){
	if (x>m || x+(n-i+1)<m) return;
	if (x==m) ans=max(ans,cnt);
	if (cnt==-1){
		dfs(a[i],x+1,i+1);
		dfs(-1,x,i+1);
	}
	else{
		dfs((cnt & a[i]),x+1,i+1);
		dfs(cnt,x,i+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(-1,0,1);
	cout<<ans;
	return 0;
}