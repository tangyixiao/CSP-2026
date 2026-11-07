#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],dp[20005][20005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) dp[1][i]=a[i];
	for(int i=2; i<=m; i++) {
		for(int j=n; j>=i; j--) {
			int k1=dp[i][j-1]&a[j],k2=dp[i-1][j]&a[j];
			dp[i][j]=max(k1,k2);
		}
	}
	cout<<dp[m][n];
	return 0;
}
