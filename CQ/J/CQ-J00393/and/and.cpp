#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[10001];
int dfs(int idx,int pick,int now=-1){
	if(pick!=m&&idx==n) return -0x7fffffff;
	if(pick==m||idx==n) return now;
	int ans=dfs(idx+1,pick,now);
	int nw;
	if(now==-1) nw=a[idx];
	else nw=now&a[idx];
	if(nw==now||nw==a[idx]) ans=max(ans,dfs(idx+1,pick+1,nw));
	return ans;
} 
int dfs2(int idx,int pick,int now=-1){
	if(pick!=m&&idx==n) return -0x7fffffff;
	if(pick==m||idx==n) return now;
	int ans=dfs(idx+1,pick,now);
	int nw;
	if(now==-1) nw=a[idx];
	else nw=now&a[idx];
	ans=max(ans,dfs(idx+1,pick+1,nw));
	return ans;
} 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int f=dfs(1,0);
	if(f==-0x7fffffff) cout<<dfs2(1,0);
	else cout<<f;
	return 0;
}
