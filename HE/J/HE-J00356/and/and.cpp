#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,dp[2010][2010],a[2010],maxn,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(dp,-1,sizeof(dp));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		dp[i][1]=maxn;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=dp[i-1][j];
		}
		for(int j=1;j<=i;j++){
			ll x=dp[i-1][j-1]&a[i];
			dp[i][j]=max(dp[i][j],x);
		} 
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}



