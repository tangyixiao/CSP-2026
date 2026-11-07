#include <iostream>
using ll = long long;
using namespace std;
constexpr int N = 2e5 + 10;
int n, a[N];
ll len, l, ans;
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i] >> c[i], len += a[i];
	int l = 1, r = n;
	while (l < r && l < len) {
		if (c[l] != c[r]) {
			if (a[l] > a[r]) ans += a[r], a[l] -= a[r], a[r] = 0, --r;
			else if (a[l] < a[r]) ans += a[l], a[r] -= a[l], a[l] = 0, ++l;
			else ans += a[l], a[l] = a[r] = 0, ++l, --r;
		} else {
			if (a[l] > a[r]) a[l] -= a[r], a[r] = 0, --r;
			else if (a[l] < a[r]) a[r] -= a[l], a[l] = 0, ++l;
			else a[l] = a[r] = 0, ++l, --r;
		}
	}
	cout << ans << "\n";
	return 0;
}
