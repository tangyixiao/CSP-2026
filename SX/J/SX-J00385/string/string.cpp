#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000100];
string  b[1000100];
ll n = 1, m, k, ans, summ;
bool flag = true;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> m;
	while (m >= 1) {

		ll u;
		string w;
		cin >> u >> w;

		for (ll i = n; i <= n + u; i++) {
			b[i] = w;
		}
		n += u;
		m--;
	}
	for (ll i = 1; i <= n / 2; i++) {
		if (b[i] != b[n - i]) {
			ans++;
		}
	}
	cout << ans;
}
