#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],maxn,sum,ands;
void dfs(long long x,long long ans,long long last)
{
	if(x==m+1)
	{
		maxn=max(ans,maxn);
		return;
	}
	for(long long i=last+1;i<=n;i++)
	{
		dfs(x+1,ans==-1?a[i]:ans&a[i],i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	cin>>a[1];
	ands=a[1];
	sum=a[1];
	for(long long i=2;i<=n;i++)
	{
		cin>>a[i];
		sum=max(sum,a[i]);
		ands&=a[i];
	}
	if(n<=20)
	{
		dfs(1,-1,0);
		cout<<maxn;
	}
	else
	{
		if(m==1)
		{
			cout<<sum;
		}
		else if(m==2)
		{
			for(long long i=1;i<=n;i++)
			{
				for(long long j=i+1;j<=n;j++)
				{
					maxn=max(maxn,a[i]&a[j]);
				}
			}
			cout<<maxn;
		}
		else if(m==n-1)
		{
			long long cnt[21]={0};
			for(long long i=1;i<=n;i++)
			{
				for(long long j=0;j<=20;j++)
				{
					if(a[i]&(1<<j))
					{
						cnt[j]++;
					}
				}
			}
			long long now=ands;
			for(long long i=1;i<=n;i++)
			{
				for(long long j=0;j<=20;j++)
				{
					if(ands&(1<<j))ands-=(1LL<<j);
					else if(cnt[j]==m-1)ands+=(1LL<<j);
				}
				maxn=max(ands,maxn);
				ands=now;
			}
			cout<<maxn;
		}
		else
		{
			dfs(1,-1,0);
			cout<<maxn;
		}
	}
	return 0;
}