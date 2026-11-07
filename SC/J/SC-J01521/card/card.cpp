#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, a[500010], b[500010], f[500010];
signed main() {
	freopen ( "card.in", "r", stdin );
	freopen ( "card.out", "w", stdout );
	ios::sync_with_stdio ( 0 );
	cin.tie ( 0 );
	cout.tie ( 0 );
	cin >> n >> m;
	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];
		b[a[i]]++;
	}
	for ( int i = 1; i <= n; i++ ) {
		f[i] = f[i - 1] + b[i];
	}
	for ( int i = 1; i <= n; i++ ) {
		if ( a[i] != a[i - 1] ) cout << f[a[i]] << ' ';
	}
	return 0;
}