#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+6;
int n,m,ans,a[maxn],vis[maxn],sum[maxn];
//dfs(x,y,z)表示在前x个数里选了y个数，与值为z
//如何剪枝优化
void dfs(int x,int y,int z){
	if(y==m){
		ans=max(ans,z);
		return;
	}
	for(int i=x;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(i+1,y+1,z&a[i]);
		}
		vis[i]=0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(i,1,a[i]);
		vis[i]=0;
	}
	cout<<ans<<'\n';
	return 0;
}//暴力搜索，预期得分50，开场2h