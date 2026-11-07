#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, maxn, ans, kin;
string s = "";
const int N = 1e6+10;
int h[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char c;
		cin >> x >> c;
		ans += x;
		if (h[c - 'a' + 1] == 0)
			kin++;
		h[c - 'a' + 1] += x;
	}
	for (int i = 1; i <= 26; i++) {
		for (int j = i + 1; j <= 26; j++) {
			if (h[i] <= h[j])
				swap(h[i], h[j]);
		}
	}
	if (kin % 2) {
		kin++;

	}
	if (kin <= 2) {
		kin += 5;
	}
	for (int i = 1; i <= kin / 4; i++) {
		maxn += h[i] + h[kin - i + 1];
	}
	if (ans == maxn)
		cout << 0;
	else {
		if (ans % 2)
			cout << ans - maxn - 1;
		else
			cout << ans - maxn;
	}
	return 0;
}
