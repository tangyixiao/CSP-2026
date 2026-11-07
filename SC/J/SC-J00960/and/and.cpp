#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans=-1;
void dfs(int x,int cnt,int sum){
	if(n-x+1<m-sum)return;
	if(cnt<ans)return;
	if(sum==m){
		ans=max(ans,cnt);
		return;
	}
	if(x==n+1){
		if(sum==m)ans=max(ans,cnt);
		return;
	}
	if(sum==0){
		dfs(x+1,a[x],sum+1);
		dfs(x+1,cnt,sum);
	}else{
		dfs(x+1,cnt,sum);
		dfs(x+1,cnt&a[x],sum+1);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}