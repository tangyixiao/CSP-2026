#include<bits/stdc++.h>
using namespace std;
pair<int,int> dp[2005][2005]={}; 
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	/*if(m==n)
	{
		for(int i=1;i<=n;i++)
		{
			dp[i]=a[i];
			for(int j=1;j<=i;j++)
			{
				//if(dp[j]&dp[i]>=dp[i])
				{
					dp[i]&=dp[j];
				}
			}
		}
		cout<<dp[n];
	}
	*/
	for(int i=1;i<=n;i++)
	{
		dp[1][i].first=a[i];
	}
	
	
	for(int i=2;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			
			dp[i][j].second=0;
			dp[i][j].first=dp[i-1][j].first;
			//cout<<dp[i][j].first<<" "<<i<<" "<<j<<endl;
			for(int k=j-1;k>=1;k--)
			{
				
				if(k==j-1)
				{
					dp[i][j].first&=dp[i-1][k].first;
					//cout<<dp[i][j].first<<" "<<i<<" "<<j<<" "<<k<<" "<<dp[i-1][k].first<<endl;
					continue;
				}
				dp[i][j].first=max(dp[i][j].first,dp[i-1][j].first&dp[i-1][k].first);
				//cout<<dp[i][j].first<<" "<<i<<" "<<j<<" "<<k<<" "<<dp[i-1][k].first<<endl;
			}
		}
	}
	cout<<dp[m][n].first;
	return 0;
}
