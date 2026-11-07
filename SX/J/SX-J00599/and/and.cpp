#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 2e5 + 10;
ll n, m, a[N], ans;
bool bl[N];

ll mi( ll m, ll n ) {
	ll as = 1;
	while ( m ) {
		if ( m & 1 ) {
			m --;
			as *= n;
		}
		m /= 2;
		n *= n;
	}
	return as;
}

void dfs( ll i, ll tot ) {
	memset( bl, 0, sizeof( bl ) );
	if ( i - 1 == m ) {
		ans = max( ans, tot );
		return;
	}
	for ( ll l = 1 ; l <= n ; l ++ ) {
		if (! bl[l] ) {
			bl[l] = 1;
			dfs( i + 1, tot &a[l] );
			bl[l] = 0;
		}
	}
}

int main() {
	freopen( "and.in", "r", stdin );
	freopen( "and.out", "w", stdout );
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for ( ll i = 1 ; i <= n ; i ++ ) {
		cin >> a[i];
	}
//	for ( ll i = 1 ; i <= n ; i ++ ) {
//		bl[i] = 1;
//		dfs( 2, a[i] );
//		bl[i] = 0;
//	}
	ll tot = mi( 55, 2 ) - 1;
	dfs( 1, tot );
	cout << ans;

	return 0;
}

/*

4 2
3 15 12 12

*/
