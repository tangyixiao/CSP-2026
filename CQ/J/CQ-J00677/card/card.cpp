#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[500005], ans[500005], sum[500005];
signed main( ){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >>n >>m;
	for ( int i = 1; i<=n; i++ )
		cin >>a[i];
	for ( int i = n; i>=1; i-- )
		if ( sum[a[i]]==0 )	
			sum[a[i]] = i;
	for ( int i = 1; i<=n; i++ ){
		for ( int j = i; j<=n; j++ ){
			ans[a[j]]++;
			if ( sum[a[j]]!=0 )
				j = sum[a[j]];
		}
	}
	for ( int i = 1; i<=m; i++ )
		cout <<ans[i] <<' ';
	return 0;
}
