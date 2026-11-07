#include<bits/stdc++.h>
using namespace std;
int a[2000100],dp[2000100][2];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][0]=a[1];dp[1][1]=1;
	for(int i=2;i<=n;i++){
		if(dp[i-1][0]<a[i]){
			dp[i][0]=a[i];
			dp[i][1]=1;
		}
		else if(n-i<=n-dp[i-1][1]){
			dp[i][0]=dp[i-1][0]&a[i];
			dp[i][1]=dp[i-1][1]+1;
		}
		else if(dp[i-1][1]+1<=m){
			dp[i][0]=max(dp[i-1][0]&a[i],dp[i-1][0]);
			if(dp[i][0]!=dp[i-1][0])dp[i][1]=dp[i-1][1]+1;
			else dp[i][1]=dp[i-1][1];
		}
	}
	cout<<dp[n][0];
	return 0;
} 
