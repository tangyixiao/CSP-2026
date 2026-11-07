#include<bits/stdc++.h>
using namespace std;
int const MAXN=2e5+5;
long long a[MAXN];
long long ans=0;
int n,m;

void dfs(int wei,long long abc,int cnt)
{
	if(wei>n||cnt>m) return ;
	dfs(wei+1,abc,cnt);
	if(abc&a[wei]>ans&&m==cnt) ans=abc&a[wei];
	dfs(wei+1,abc&a[wei],cnt+1);
}

int main()
{
    freopen ("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]>ans) ans=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i-1];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]&a[j]>ans) ans=a[i]&a[j];
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n-1)
	{
		for(int i=1;i<=n;i++)
		{
			long long zhi=LONG_LONG_MAX;
			for(int j=1;j<=n;j++)
			{
				if(j!=i)
				{
					zhi&=a[j];
				}
			}
			if(zhi>ans) ans=zhi;
		}
		cout<<ans;
		return 0;
	}
	else
	{
		dfs(1,LONG_LONG_MAX,0);
		cout<<ans;
		return 0;
	}
	
	return 0;
}
