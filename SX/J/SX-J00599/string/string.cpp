#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 2e5 + 10;
ll n, a[N];
ll cnt = 0;
char c[N];
string s = "";

int main() {
	freopen( "string.in", "r", stdin );
	freopen( "string.out", "w", stdout );
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for ( ll i = 1 ; i <= n ; i ++ ) {
		cin >> a[i] >> c[i];
		for ( ll j = 1 ; j <= a[i] ; j ++ ) {
			s += c[i];
		}
	}
	if ( s.size() & 1 ) {
		ll l = s.size() / 2 - 1, r = s.size() / 2 + 1;
		while ( l >= 0 && r <= s.size() - 1 ) {
			if ( s[l] != s[r] ) {
				s[r] = s[l];
				cnt ++;
			}
			l --, r ++;
		}
	} else {
		ll l = s.size() / 2 - 1, r = s.size() / 2;
		while ( l >= 0 && r <= s.size() - 1 ) {
			if ( s[l] != s[r] ) {
				s[r] = s[l];
				cnt ++;
			}
			l --, r ++;
		}
	}
	cout << cnt;

	return 0;
}
