#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N];
void dfs(int cnt,int now,int pos){
	if(cnt==m+1){
		ans=max(ans,now);
		return;
	}
	if(pos==n+1)return;
	if(cnt==0)dfs(cnt+1,a[pos],pos+1);
	dfs(cnt,now,pos+1);
	dfs(cnt+1,now&a[pos],pos+1);
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(0,0,1);
	cout<<ans;
	return 0;
}
