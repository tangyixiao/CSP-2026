#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans,a[200005],vis[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],vis[i]=1;
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++) if(vis[j]&&((a[j]>>i)&1)) cnt++;
		if(cnt<m) continue;
		ans+=(1<<i);
		for(int j=1;j<=n;j++) if(!((a[j]>>i)&1)) vis[j]=0;
	}
	cout<<ans;
	return 0;
}//O(n*30)
