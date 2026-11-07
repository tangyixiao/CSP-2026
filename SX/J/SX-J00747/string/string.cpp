#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll n;
ll a[200010];
char c[200010];
ll ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	ll i = 1, j = n;
	while (i < j) {
		ll sum = min(a[i], a[j]);
		a[i] -= sum;
		a[j] -= sum;
		if (c[i] != c[j]) {
			ans += sum;
		}
		if (a[i]) {
			j--;
		} else if (a[j]) {
			i++;
		} else {
			j--;
			i++;
		}
	}
	cout << ans;
	return 0;
}