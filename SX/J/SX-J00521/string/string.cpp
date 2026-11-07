#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, ans, a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	if (n == 1)
		cout << 0;
	ll l = 1, r = n;
	while (l <= r) {
		if (a[l] > a[r]) {
			a[l] -= a[r];
			if (c[l] != c[r])
				ans += a[r];
			r--;
		} else if (a[l] < a[r]) {
			a[r] -= a[l];
			if (c[l] != c[r])
				ans += a[l];
			l++;
		} else {
			if (c[l] != c[r])
				ans += a[l];
			l++, r--;
		}
	}
	cout << ans;
	return 0;
}