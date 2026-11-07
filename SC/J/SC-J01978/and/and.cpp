#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],ans=-1;bool vis[200005];
void dfs(int cnt,int sum)
{
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(cnt+1,sum&a[i]);
			vis[i]=0;
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}