#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,d[200005];
void dfs(int n,int m)
{
	for(int i=2;i<=n;i++)
	{
		d[i]=(a[i-1]&a[i]);
		ans=max(ans,d[i]);
	}
	sort(d+1,d+n+1);
	while(m-2>0)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,d[n]&a[i]);
		}
		m--;
	}
}
int main()
{
	freopen("and.in ","r",stdin);
	freopen("and.out ","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(n,m);
	cout<<ans;
}
