#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAXN = 2e5 + 5;
int n, x[MAXN], ans;
char c[MAXN];
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x[i] >> c[i];
	}
	int l = 1, r = n;
	while (l < r) {
		int val = min(x[l], x[r]);
		if (c[l] != c[r]) {
			ans += val;
		}
		if (x[l] < x[r]) {
			l++;
			x[r] -= val;
		} else if (x[l] > x[r]) {
			r--;
			x[l] -= val;
		} else {
			r--;
			l++;
		}
	}
	cout << ans;
	return 0;
}
