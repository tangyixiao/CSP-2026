#include<bits/stdc++.h>
using namespace std;
long long n,m,rt=1;
long long a[500005];
long long f[300005];
long long s[300005];
long long bg[500005];
long long ans[300005];
long long u[500005];
bool flag[500005];
long long pl[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=50005)
	{
		for(long long i=1;i<=n;i++)
		{
			for(long long j=1;j<=m;j++)
			{
				flag[j]=0;
			}
			for(long long j=1;j<=n;j++)
			{
				u[j]=0;
			}
			for(long long j=i;j<=n;j++)
			{
				u[j]=a[j];
				if(flag[u[j]])
				{
					for(long long k=pl[u[j]];k<j;k++)
					{
						flag[u[k]]=0;
						u[k]=0;
					}
				}
				pl[u[j]]=j;
				flag[u[j]]=1;
			}
			for(long long j=1;j<=m;j++)
			{
				if(flag[j])
				{
					ans[j]++;	
				}
			}
		}
		for(long long i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(long long i=n;i>=1;i--)
	{
		if(f[a[i]])
		{
			if(!s[a[i]])
			{
				s[a[i]]=i;
			}
		}
		else
		{
			f[a[i]]=i;
		}
	}
	for(long long i=1;i<=m;i++)
	{
		if(s[a[i]])
		{
			rt=max(rt,f[a[i]]);	
		}
	}
	for(long long i=n;i>=rt;i--)
	{
		bg[i]=max(bg[i+1],s[a[i]]);
		ans[a[i]]=i-bg[i+1];
	}
	for(long long i=1;i<rt;i++)
	{
		if(a[rt]!=a[i])
		{
			ans[a[i]]++;
		}
	}
	for(long long i=1;i<=m;i++)
	{
		ans[i]=0;
	}
	for(long long i=1;i<=n;i++)
	{
		if(!ans[a[i]])
		{
			ans[a[i]]=n-i+1;
		}
	}
	for(long long i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
} 
