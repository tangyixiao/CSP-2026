#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long dp[4][200005];
long long M(int xx,int yy){
	long long Max=0;
	for(int i=1;i<yy;i++){
		Max=max(Max,dp[xx][i] & a[yy]);
	}
	return Max;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(dp,0,sizeof dp);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dp[1][i]=max(a[i],dp[1][i-1]);
	}
	for(int i=2;i<=m;i++){
		memset(dp[2],0,sizeof dp[2]);
		for(int j=i;j<=n;j++){
			dp[2][j]=M(1,j);
		}
		for(int j=1;j<=n;j++){
			dp[1][j]=dp[2][j];
		}
	}
	cout<<dp[1][n]<<endl;
	return 0;
}
