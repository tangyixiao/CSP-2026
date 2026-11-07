#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+9;
int a[N];
char b[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	int l = 1, r = n, ans = 0;
	while (l <= r) {
		if (a[l] == a[r]) {
			if (b[l] != b[r])
				ans += a[l];
			a[l] = 0, a[r] = 0;
			l++;
			r--;
		} else if (a[l] < a[r]) {
			if (b[l] != b[r])
				ans += a[l];
			a[r] -= a[l], a[l] = 0;
			l++;
		} else {
			if (b[l] != b[r])
				ans += a[r];
			a[l] -= a[r], a[r] = 0;
			r--;
		}
	}
	cout << ans;
	return 0;
}