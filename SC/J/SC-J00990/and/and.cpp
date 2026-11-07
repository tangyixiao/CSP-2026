#include<bits/stdc++.h>//50
#define int long long
#define mod 998244353
using namespace std;

int n,m,ans,a[250000];

bool cmp(int q,int p)
{
	return q>p;
}

void dfs(int now,int step,int s)
{
	if(s<ans) return;
	if(step==m+1)
	{
		ans=max(ans,s);
		return;
	}
	if(now==n+1) return;
	dfs(now+1,step,s);
	if(step==1) dfs(now+1,step+1,a[now]);
	else dfs(now+1,step+1,s&a[now]);
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	dfs(1,1,0);
	cout<<ans;
	return 0;
}











