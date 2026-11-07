#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 200005;
long long n,m,a[MAX_SIZE];
long long dp[MAX_SIZE];
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	dp[1] = a[1];
	dp[m+1] = a[1];
	for(int i = 2;i<=m;i++){
		dp[i] = dp[i-1]&a[i];
		for(int j = 3;j<=m;j++){
			dp[i] = max(dp[i],dp[i-1]&a[j]);
		}
		dp[m+1] = max(a[i],dp[1+m]);
	}
	dp[m+1] = max(dp[m+1],dp[1]);
	for(int i = 2;i<=n-m;i++){
		for(int j = m+i-1;j<n+1;j++){
			dp[m+i] = max(dp[m-1+i]&a[j],dp[m+i]);
		}
		dp[m+i] = max(dp[m+i],dp[i]);
	}
	cout<<max(dp[n]&a[n],dp[m]);
	return 0;
}