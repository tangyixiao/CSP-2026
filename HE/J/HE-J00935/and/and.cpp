#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[400015],dp[400015];
long long ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	if(n==1)
	{
		cout <<a[1];
		exit(0);
	}
	dp[1]=a[1];
	dp[0]=pow(2,63)-1;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=min(i,m);j>=1;j--)
		{
			dp[j]=max(dp[j],dp[j-1]&a[i]);	
		}
	}
	cout <<dp[m]; 
	return 0;
}
