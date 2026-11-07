#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],dp[20005][20005];
map <long long,long long> mp;
priority_queue<long long> q;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q.push(a[i]);
	}
	if(m==1)
	{
		cout<<q.top();
	}
	else if(m==2)
	{
		long long ma=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
	}
	else
	{
		dp[1][1]=a[1];
		for(int i=2;i<=n;i++)
		{
			dp[i][1]=a[i];
			for(int j=2;j<=m;j++)
			{
				for(int k=1;k<=i-1;k++)if(j<=i)dp[i][j]=max(dp[i-1][j],max(dp[k][j-1]&a[i],dp[i][j]));
			}
		}
		cout<<dp[n][m];
	}
	return 0;
}
