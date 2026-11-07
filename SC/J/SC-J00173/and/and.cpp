#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n+1];
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	int dp[n];
	dp[1] = a[1];
	for (int i = 2;i <= n;i++){
		dp[i] = max(dp[i-1]&a[i],a[i]); 
	}
	cout << dp[n];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 