#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],dp[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a,a+n);
	memset(dp,0,sizeof(dp));
	dp[0]=pow(2,34)-1;
	for(int i=1;i<=n;i++)
		for(int j=m;j>=1;j--)
			dp[j]=max(dp[j],dp[j-1]&a[i]);
	cout<<dp[m];
	return 0;
} 
