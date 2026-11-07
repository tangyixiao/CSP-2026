#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+5;

int n,m;
int a[N];
ll ans = 0;



int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	
	cin >> n >> m;
	vector<vector<ll>> dp(m+1,vector<ll>(n+1));
	for(int i = 1;i<=n;++i) cin >> a[i];
	
	for(int i = 1;i<=n;++i) dp[0][i] = a[i];
	for(int i = 1;i<=m;++i){
		for(int j = 2;j<=n;++j)
		dp[i][j] = max(dp[i][j],dp[i-1][j]&a[j]);
	}
	cout << dp[m][n];
}
