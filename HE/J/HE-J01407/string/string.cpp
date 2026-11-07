#include<bits/stdc++.h>
using namespace std;
long long a[150000000];
string b,dp;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,o=0,p=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			dp[p]=b[i];
			p=p+1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=(n+1)/2;j>=1;j--)
		{
			if(dp[i]!=dp[j])
			{
				o++;
			}
		}
	}
	cout<<o;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
 } 


