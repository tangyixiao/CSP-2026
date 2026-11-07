#include<bits/stdc++.h>
using namespace std;
int n,m,maxn=INT_MIN;
int a[200010];
void dfs(int cnt,int sum,int y)
{
	if(cnt==m+1)
	{
		maxn=max(maxn,sum);
		return;
	}
	for (int i=y;i<=n;i++)
	{
		if(sum==0)
		{
			dfs(cnt+1,a[i],i+1);
		}else
		{
			dfs(cnt+1,sum&a[i],i+1);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(1,0,1);
	cout<<maxn;
	return 0;
}
