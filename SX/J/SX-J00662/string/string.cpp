#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
string s;
char c[N];
ll n, l[N], ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> l[i] >> c[i];
	}
	ll x = 0, y = 0;
	for (ll i = 1, j = n; i < j;) {
		x++, y++;
		if (x > l[i])
			i++, x = 1;
		if (y > l[j])
			j--, y = 1;
		if (i > j)
			break;
		char m1 = c[i], m2 = c[j];
		if (m1 != m2) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
