#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m, flag1 = 1, flag2 = 1, cnt = INT_MIN, used[300010];
int a[300010];
bool is ( int x ) {
	if ( x < 2 ) return 0;
	while ( x ) {
		if ( x == 1 ) return 1;
		if ( x % 2 == 0 ) x /= 2;
		else return 0;
	}
	return 0;
}
void f ( int x, int y ) {
	if ( y > m ) {
		cnt = max ( cnt, x );
		return;
	}
	for ( int i = y + 1; i <= n; i++ ) {
		if ( !used[i] ) {
			used[i] = 1;
			f ( x&a[i], y + 1 );
			used[i] = 0;
		}
	}
}
signed main() {
	freopen ( "and.in", "r", stdin );
	freopen ( "and.out", "w", stdout );
	ios::sync_with_stdio ( 0 );
	cin.tie ( 0 );
	cout.tie ( 0 );
	cin >> n >> m;
	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];
		if ( a[i] != i - 1 ) {
			flag1 = 0;
		}
		if ( !is ( a[i] + 1 ) ) {
			flag2 = 0;
		}
	}
	sort ( a + 1, a + n + 1 );
	if ( n == m ) {
		int ans = a[1];
		for ( int i = 2; i <= n; i++ ) {
			ans = ans&a[i];
		}
		cout << ans;
		return 0;
	} else if ( m == 1 ) {
		int ans = INT_MIN;
		for ( int i = 1; i <= n; i++ ) {
			ans = max ( ans, a[i] );
		}
		cout << ans;
		return 0;
	} else if ( m == 2 ) {
		int ans = INT_MIN;
		for ( int i = 1; i <= n; i++ ) {
			for ( int j = i + 1; j <= n; j++ ) {
				ans = max ( ans, a[i] & a[j] );
			}
		}
		cout << ans;
		return 0;
	} else if ( flag1 ) {
		cout << n - m;
		return 0;
	} else if ( flag2 ) {
		cout << a[n - m + 1];
		return 0;
	} else {
		for ( int i = 1; i <= n; i++ ) {
			f ( a[i], 1 );
		}
		cout << cnt;
	}
	return 0;
}