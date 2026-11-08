#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[200005], ans = INT_MIN;
void dfs ( int x, int sum, int k ){
	if ( k==m ){
		ans = max (ans, sum);
		return ;
	}
	int cnt;
	for ( int i = x; i<=n; i++ ){
		if ( sum==-1 ) cnt = a[i];
		else cnt = sum&a[i];
		dfs (i + 1, cnt, k + 1);
	}
}
signed main( ){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >>n >>m;
	for ( int i = 1; i<=n; i++ )
		cin >>a[i];
	for ( int i = 1; i<=n - m + 1; i++ )
		dfs (i, -1, 0);
	cout <<ans;
	return 0;
}
