#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200001],ans;
bool maps[200001][31];
bool mp[200001],d[200001];
bool cmp(long long x,long long y)
{return x>y;}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{cin>>a[i];}
	for(int i=1;i<=n;i++)
	{
		long long ai=a[i];
		for(int j=0;j<=30;j++)
		{
			maps[i][j]=ai&1;
			ai=ai>>1;
		}
	}
	bool flag=0;
	for(int j=30;j>=0;j--)
	{
		int cnt=0;
		memset(mp,0,sizeof(mp));
		for(int i=1;i<=n;i++)
		{
			if(maps[i][j]==1)
			{
				if(flag==0)
				{
					mp[i]=1;
					cnt++;
				}
				else if(d[i]==1)
				{
					mp[i]=1;
					cnt++;
				}
			}
		}
		if(cnt>m)
		{
			for(int i=1;i<=n;i++)
			{
				if(flag==0&&mp[i]==1)
				{d[i]=1;}
				else if(d[i]==1&&mp[i]==0)
				{d[i]=0;}
			}
			flag=1;
		}
		if(cnt==m)
		{
			for(int i=1;i<=n;i++)
			{
				
				if(flag==0&&mp[i]==1)
				{d[i]=1;}
				else if(d[i]==1&&mp[i]==0)
				{d[i]=0;}
			}
			flag=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(d[i]==1)
		{
			if(ans==0)
			{ans=a[i];}
			else
			{ans&=a[i];}
		}
	}
	cout<<ans;
	return 0;
}
