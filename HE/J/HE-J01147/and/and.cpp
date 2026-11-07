#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m;
int dp[3002][3002];
int a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	dp[1][0]=0,dp[1][1]=a[1];
	for(int i=1;i<=n;i++)
		for(int j=0;j<=i;j++){
			dp[i][j]=max(dp[i][j],dp[i-1][j]);
			if(j==1)dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]);
			if(j>1)dp[i][j]=max(dp[i][j],dp[i-1][j-1]&a[i]);
		} 
	cout<<dp[n][m];
	return 0;
} 

/*
4 2
3 15 12 12

5 3
31 3 1 15 7


*/
