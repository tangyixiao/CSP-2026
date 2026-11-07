//zen me nian nian T3 zhe me nan a TAT
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],ans=0;
void dfs(int d,int sum)
{
	if(d>n)
	{
		ans=max(ans,sum);
		return ;
	}
	if(sum<ans) return ;
	for(int i=d;i<=n;i++)
	{
		if(d==1) dfs(d+1,a[i]);
		else dfs(d+1,sum&a[i]);
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1)
	{
		int maxn=0;
		for(int i=1;i<=n;i++) cin>>a[i],maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0;
	}
	if(m==n)
	{
		int ans;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(i==1) ans=a[i];
			else ans^=a[i];
		}
		cout<<ans;
		return 0;
	}
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(__builtin_popcount(a[i]+1)!=1) f=0;
	}
	if(f)
	{
		sort(a+1,a+n+1,greater<int>());
		cout<<a[m];
		return 0;
	}
	sort(a+1,a+n+1,greater<int>());
	dfs(1,0);
	cout<<ans;
	return 0;
}
