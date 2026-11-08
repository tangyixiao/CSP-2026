#include<bits/stdc++.h>
using namespace std;
int a[10005];
bool dp[10005][10005];
int dao[10005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int now;
	for(int i=n;i>=1;i--)
	{
		now=i;
		for(int j=n;j>i;j++)
		{
			if(a[i]==a[j])
			{
			now=j;
			break;	
			}
		}
		if(now!=i)
		{
			for(int j=i+1;j<now;j++)
			{
				dao[j]++;
				dp[i][j]=1;
			}
		}
		now+=1;
		for(int j=now;j<=n;j++)
		{
			if(dp[now][j])
			{
				dao[j]++;
				dp[i][j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(a[j]==i)
			{
				cout<<j-dao[j];
			}
			break;
		}
	}
	return 0;
}
