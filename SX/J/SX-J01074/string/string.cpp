#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e9+5;
int n, x, cnt, ans, cnt1;
string s, a[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int z = 1; z <= n; z++) {
		cin >> x >> s;
		ans += x;
		for (int i = 1; i <= x; i++) {
			a[i] += s;
		}
	}
	for (int i = 1; i <= ans; i++) {
		if (a[i] != a[i + 1])
			break;
		else
			cnt1++;
	}
	if (cnt1 == ans) {
		cout << 0;
		return 0;
	}
	for (int l = 1, r = ans; l <= ans, r >= 1; l++, r--) {
		if (a[l] != a[r]) {
			a[r] = a[l];
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
