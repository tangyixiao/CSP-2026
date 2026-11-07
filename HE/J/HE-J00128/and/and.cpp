#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
const int N=2e5+3;
int a[N],dp[20003][20003];
int cmp(int p)
{
	for(int i=n;a[i]<p;i--)
		n--;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >>n >>m;
	for(int i=1;i<=n;i++)
		cin >>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
		dp[i][1]=a[i];
	for(int i=1;i<=m;i++)
		dp[1][i]=a[1];
//	cout <<n  <<" " <<m <<endl;	
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			dp[i][j]=max((dp[i-1][j-1]&a[i]),dp[i-1][j]);
			cmp(dp[i][j]);		
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)	
//			cout <<dp[i][j] <<" ";
//		cout <<endl;	
//	}		
	cout <<dp[n][m];
	return 0;
 } 
