#include<iostream>
#include <cstdio> 
#include<cstring>
#include <algorithm>
using namespace std;
int n,m;
int a[200005];
long long maxn;
bool vis[200005];
void dfs(int x,int step)
{
	if(step==m)
	{
		maxn=max(maxn,x);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			dfs(x&a[i],step+1);
			vis[i]=0;
		}
	}
}

bool cmp(int x,int y)
{
	return x>y;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		long long mn=-1e8;
		for(int i=1;i<=n;i++)
		{
			mn=max(mn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n)
	{
		long long ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		long long mn=-1e8;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				mn=max(mn,a[i]&a[j]);
			}
		}
		cout<<mn;
		return 0;
	}
	else if(m==n-1)
	{
		long long maxx=-1e8,lo=a[2];
		for(int i=2;i<=n;i++)
		{
			lo&=a[i];
		}
		maxx=max(maxx,lo);
		for(int i=2;i<=n;i++)
		{
			long long ans=a[1];
			for(int j=1;j<=n;j++)
			{
				if(j!=i)
				{
					ans&=a[j];
				}
			}
			maxx=max(maxx,ans);
		}
		cout<<maxx;
		return 0;
	}
	if(n<=20)
	{
		for(int i=1;i<=n;i++)
		{
			memset(vis,0,sizeof(vis));
			vis[i]=1;
			dfs(a[i],1);
		}
		cout<<maxn;
		return 0;
	}
	else
	{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
	return 0;
}