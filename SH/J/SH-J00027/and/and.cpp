#include <bits/stdc++.h>
using namespace std;
long long a[200005];
bool vis[200005];
int n,m;
long long maxn=0;
void dfs(long long ans,int cnt)
{
	if(cnt==0)
	{
		maxn=max(maxn,ans);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{

			if(!vis[i]&&!vis[j])
			{
				vis[i]=1;
				vis[j]=1;
				if(ans==1)
				{
					dfs(a[i]&a[j],m-1);
				}
				else
				{
					dfs(a[i]&a[j]&ans,m-1);
				}
				vis[i]=0;
				vis[j]=0;
			}
		}
	}
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

	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long c=a[i]&a[j];
				maxn=max(maxn,c);
			}
		
		}
	}
	else if(m==1) 
	{
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]);
		}
	}
	else if(m==n)
	{
		maxn=a[1];
		for(int i=2;i<=n;i++)
		{
			maxn=maxn&a[i];
		}
	}
	else
	{
		dfs(1,m);
	}
	cout<<maxn;
} 
