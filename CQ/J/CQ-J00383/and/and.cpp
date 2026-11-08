#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2005];
int dp[2005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dp[i][0]=INT_MAX;
	}
	dp[1][1]=a[1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>i){
				dp[i][j]=dp[i-1][j];
			}else{
				dp[i][j]=max(dp[i][j],(dp[i-1][j-1]&a[i]));
			}
		}
	}
	int maxn=0;
	for(int i=1;i<=m;i++){
		maxn=max(maxn,dp[n][i]);
	}
	cout<<maxn;
	return 0;
}
