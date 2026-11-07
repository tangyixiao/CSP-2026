#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x, ans = 0, a[200005];
char c;
string s;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> c;
		s += c;
		a[i] = x;
	}
	for (int i = 0, j = s.size() - 1; i < j;) {
		int t = min(a[i], a[j]);
		if (s[i] != s[j]) ans += t;
		a[i] -= t, a[j] -= t;
		if (a[i] == 0) i++;
		if (a[j] == 0) j--;
	}
	cout << ans;
	return 0;
}