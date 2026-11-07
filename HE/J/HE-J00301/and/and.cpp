#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+1];
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long dp[n+1][m+1];
	for(long long i=0;i<=n;i++){
		for(long long j=0;j<=m;j++){
			dp[i][j]=0;
		}
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=i&&j<=m;j++){
			if(j==1){
				for(long long l=1;l<=i;l++){
					dp[i][j]=max(dp[i][j],a[l]);
				}
			}
			else{
				dp[i][j]=max(a[i]&dp[i-1][j],a[i]&dp[i][j-1]);
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}
