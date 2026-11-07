#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
// waiting for AFO
// T2 so hard
// T3 so easy

ll n, m, ans;
ll a[200009];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 29; i >= 0; i--) { // max < 2^30, so i = 29->0
		ll cnt = 0, test = ans | (1ll << i);
		for (int i = 1; i <= n; i++) {
			if ((a[i] & test) == test)
				cnt++;
		}
		if (cnt >= m) {
			ans = test;
		}
	}
	cout << ans;
	// 10:03 ~ 10:06
	return 0;
}