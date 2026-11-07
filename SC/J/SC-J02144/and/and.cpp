#include<bits/stdc++.h>
using namespace std;
const int N=2e4+5;
int n,m,a[N],dp[N][N],ans;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++) 
		cin >> a[i];
	for (int j=1;j<=m;j++) {
		for (int i=1;i<=n;i++) {
			if (j==1) dp[i][j]=max(dp[i-1][j],a[i]);
			else dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
		}
	}
	for (int i=1;i<=n;i++)
		ans=max(dp[i][m],ans);
	cout << ans;
	return 0;
}