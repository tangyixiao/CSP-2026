#include<bits/stdc++.h> 
using namespace std;
	long long n=0,m=0,ant=-1,a[1000000],l=0,dp[100000][1000000];
	
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>l;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<l;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j+1]|a[i]);
		}
		
	}
	for(int i=0;i<n;i++)
	{
		ant=max(ant,dp[i][l]);
	}
	
	cout<<ant;
return 0;
}
