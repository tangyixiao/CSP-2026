#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int vis[500005],c[500005];
int f[500005],ans[500005];
int cnt[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=500)
	{
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++) vis[i]=0;
			for(int i=1;i<=m;i++) f[i]=0;
			for(int i=k;i<=n;i++)
			{
				if(c[a[i]]&&!vis[c[a[i]]])
				{
					for(int j=c[a[i]];j<i;j++) vis[j]=1;
				}
				c[a[i]]=i;
			}
			for(int i=k;i<=n;i++)
			{
				if(!vis[i]) f[a[i]]=1;
			}
			for(int i=1;i<=m;i++) 
			{
				ans[i]+=f[i];
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			cnt[a[i]]++;
		}
		int ut=0;
		for(int i=1;i<=m;i++)
		{
			ut+=cnt[i];
			cout<<ut<<' ';
		}
	}
	return 0;
}