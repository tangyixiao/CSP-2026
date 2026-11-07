#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int N,M;
	cin>>N>>M;
	
	int a[N+5];
	for(int i=1;i<=N;i++)cin>>a[i];
	
	int dp[N+5][M+5];
	dp[0][0]=2147483647;
	
	for(int i=1;i<=N;i++){
		dp[i][0]=2147483647;
		for(int j=1;j<=min(i,M);j++){
			if(j==i)dp[i][j]=dp[i-1][j-1]&a[i];
			else{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
			}
		}
	}
	
//	for(int i=0;i<=N;i++){
//		for(int j=0;j<=i;j++){
//			cout<<dp[i][j]<<"  ";
//		}
//		cout<<'\n';
//	}
	
	int ans=0;
	for(int i=M;i<=N;i++){
		ans=max(ans,dp[i][M]);
	}
	cout<<ans;
	return 0;
}