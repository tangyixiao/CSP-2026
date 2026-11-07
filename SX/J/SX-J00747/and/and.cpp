#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll n, m;
ll a[200010];
bool e[200010][50];
ll b[200010];
ll sta = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<ll>());
	for (ll i = 1; i <= n; i++) {
		ll Log = 0;
		ll j = a[i];
		while (j) {
			Log++;
			e[i][41 - Log] = j % 2;
			j /= 2;
		}
		sta = max(sta, Log);
	}
//	for (ll i = 1; i <= n; i++) {
//		for (ll j = 0; j <= 40; j++) {
//			cout << e[i][j] << " ";
//		}
//		cout << endl;
//	}
	sta = 41 - sta;
	//cout << sta;
	ll li = 0;
	for (ll i = sta; i <= 40; i++) {
		ll sum = 0;
		for (ll j = 1; j <= n; j++) {
			if (a[j] == -1)
				continue;
			if (e[j][i]) {
				sum++;
			}
		}
		if (sum >= m) {
			for (ll j = 1; j <= n; j++) {
				if (a[j] == -1)
					continue;
				if (!e[j][i]) {
					a[j] = -1;
					li++;
				}
			}
		}
		if (n - li == m) {
			ll ans = a[1];
			for (ll j = 2; j <= n; j++) {
				//cout << ans << " ";
				if (a[j] == -1)
					continue;
				ans = ans &a[j];
			}
			cout << ans;
			return 0;
		}
	}
	ll ans = a[1];
	for (ll j = 2; j <= n; j++) {
		if (a[j] == -1)
			continue;
		//cout << ans << " ";
		ans = ans &a[j];
	}
	cout << ans ;
	return 0;
}
