#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200005],dp[2005][2005],f;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>1) dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
			else dp[i][j]=max(dp[i-1][j],a[i]);	
		}
	}
	cout<<dp[n][m];
	return 0;
}