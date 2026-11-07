#include<bits/stdc++.h>
using namespace std;
long long c[1000000],v[1000000],dp[100000][100000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t,m;
	cin>>t>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>v[i]>>c[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=0;j<=t;j++)
		{
			if(dp[i][j]==dp[i-1][j])
	{
		continue;
	}
		    dp[i][j]=max(dp[i-1][j],dp[i][j-v[i]]-c[i]);	
		}
	}
	cout<<dp[m][t];
	return 0;
}
