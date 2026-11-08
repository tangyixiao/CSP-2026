#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn,b[200005],b1[200005],c[200005][35],d[35],t,vis[200005],max1,sum,tot,dp[2005][2005];
void fun(int x,int y)
{
	t=0;
	int x1=x;
	while(x1)
	{
		d[++t]=x1%2;
		x1/=2;
	}
	for(int i=1;i<=t;i++)
	{
		c[y][t-i+1]=d[i];
	}
	max1=max(max1,t);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		fun(a[i],i);
		maxn=max(maxn,a[i]);
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==2&&n<=2000)
	{
		maxn=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n)
	{
		maxn=a[1];
		for(int i=2;i<=n;i++)
		{
			maxn=maxn&a[i];
		}
		cout<<maxn;
	}
	if(m==n-1)
	{
		b[1]=a[1];
		b1[1]=a[n];
		maxn=0;
		for(int i=2;i<=n;i++)
		{
			b[i]=b[i-1]&a[i];
		}
		for(int i=n-1;i>=1;i--)
		{
			b1[n-i+1]=b1[n-i]&a[i];
		}
		maxn=max(b[n-1],b1[n-1]);
		for(int i=1;i<n-1;i++)
		{
			maxn=max(maxn,b[i]&b1[n-i-1]);
		}
		cout<<maxn;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=min(m,i);j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j>=1)
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
			}
		}
	}
	for(int i=m;i<=n;i++)
	{
		max1=max(max1,dp[i][m]);
	}
	cout<<max1;
	return 0;
}
