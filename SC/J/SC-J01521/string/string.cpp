#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int flag1 = 1;
char a[600010];
int b[600010], is[600010], ans;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio ( 0 );
	cin.tie ( 0 );
	cout.tie ( 0 );
	cin >> n;
	for ( int i = 1; i <= n; i++ ) {
		cin >> b[i] >> a[i];
		if ( b[i] != 1 ) flag1 = 0;
	}
	if ( flag1 ) {
		for ( int i = 1; i <= n / 2; i++ ) {
			if ( a[i] != a[n - i + 1] ) {
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
	for ( int i = 1; i <= n - 1; i++ ) {
		if ( a[i] == a[i + 1] ) {
			b[i] += b[i + 1];
			for ( int j = i + 1; j <= n - 1; j++ ) {
				b[j] = b[j + 1];
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}
	int flag = 1;
	for ( int i = 1; i <= n; i++ ) {
		if ( a[i] == a[n - i + 1] && b[i] == b[n - i + 1] ) {

		} else {
			flag = 0;
			break;
		}
	}
	if ( flag ) {
		cout << 0;
		return 0;
	}
	for ( int i = 1; i <= n / 2; i++ ) {
		if ( a[i] == a[n - i + 1] ) {
			ans += abs ( b[i] - b[n - i + 1] );
			for ( int j = n; j >= n - i + 1; j-- ) {
				b[j + 1] = b[j];
				a[j + 1] = a[j];
			}
			b[n - i + 1] = abs ( b[i] - b[n - i + 1] );
			a[n - i + 1] = a[i + 1];
			n++;
		} else {
			ans += max ( b[i], b[n - i + 1] );
		}
	}
	cout << ans;
	return 0;
}