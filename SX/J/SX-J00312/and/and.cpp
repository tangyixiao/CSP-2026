#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005], n, k;

bool check(ll x) {
	ll y = 0;
	for (int i = 1; i <= n; i++) {
		if ((x & a[i]) == x)
			y++;
	}
	if (y >= k)
		return 1;
	return 0;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll r = (1 << 30), l = 1, ans = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	while (l <= r) {
		ll mid = (l + r) >> 1;
		if (check(mid) == 1) {
			ans = mid;
			l = mid + 1;
		} else
			r = mid - 1;
	}
	cout << ans;
	return 0;
}
