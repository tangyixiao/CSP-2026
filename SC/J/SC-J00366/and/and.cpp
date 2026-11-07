#include<bits/stdc++.h> 
using namespace std;
int n,m;
int dp[20005][20005];
int a[200005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
		    dp[i][j]=0;
	    }
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			int x=a[i]||dp[i-1][j-1];
			dp[i][j]=max(dp[i][j],x);
		}
	}
	cout<<dp[n][m];
	return 0;
}