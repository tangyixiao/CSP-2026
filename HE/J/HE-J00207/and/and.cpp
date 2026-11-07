#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long c[200057];
void dfs(long long u,long long sum,long long now){
	if(now==m){
		ans=max(ans,sum);
		return;
	}
	if(u<=n){
	if(sum==0)dfs(u+1,c[u],now+1);
	else dfs(u+1,(sum&c[u]),now+1);
	}
	if(u<=n)dfs(u+1,sum,now);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}
