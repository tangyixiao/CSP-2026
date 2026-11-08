#include<bits/stdc++.h>
using namespace std;
vector<long long> dp(500000,1073741823);
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a;	
	int c=0; 
	for(int i=0;i<n;i++)
	{
	
		cin>>a;
		c=max(c,a);
	}
	cout<<c;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a;
//		for(int j=m;j>1;j--)
//		{
//			if(dp[j]==1073741823)
//			{
//				dp[j]=dp[j]&a;
//			}
//			else
//				dp[j]=max(dp[j],dp[j-1]&a);
//			
//		}
//	}
//	
//	cout<<dp[m];
	return 0;
}
