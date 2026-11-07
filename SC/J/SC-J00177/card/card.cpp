#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],dp[100005][3005],idx[M];
int bl[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,flag=1;
	cin>>n>>m;
	for(int i=1;i<=m;i++) idx[i]=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1]) flag=0;
	}
	if(flag==1)
	{
		for(int i=1;i<=n;i++) bl[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<bl[i]<<' ';
	}
	else
	{
		for(int i=n;i>=1;i--)
		{
			for(int j=m;j>=1;j--)
			{
				if(idx[a[i]]!=-1) dp[i][j]=dp[idx[a[i]]+1][j]+(j==a[i]);
				else
				{
					idx[a[i]]=i;
					dp[i][j]=dp[i+1][j]+(j==a[i]);
				}
			}	
		}
		for(int i=1;i<=m;i++)
		{
			int res=0;
			for(int j=1;j<=n;j++) res+=(dp[j][i]>0);
			cout<<res<<' ';
		}
	}
	return 0;
}
