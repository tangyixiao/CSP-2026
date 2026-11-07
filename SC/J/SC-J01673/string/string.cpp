#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 50;
int n;
ll ans, p[N], len[N];
char c[N];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> len[i] >> c[i];
		p[i + 1] = p[i] + len[i];
	}
	int pp = upper_bound(p + 1, p + 1 + n, p[n + 1] / 2) - p - 1;
	ll len1 = p[n + 1] / 2 - p[pp];
	ll len2 = len[pp] - 1 - len1;
	for (int i = n; i >= pp; --i) {
		len[i + 2] = len[i], c[i + 2] = c[i];
	}
	n += 2;
	len[pp] = len1, len[pp + 1] = 1, len[pp + 2] = len2;
	c[pp + 1] = c[pp + 2] = c[pp];
	int l = pp, r = pp + 2;
	while (l >= 1 && r <= n) {
		while (l >= 1 && len[l] == 0) --l;
		while (r <= n && len[r] == 0) ++r;
		if (len[l] < len[r]) {
			len[r] -= len[l];
			if (c[l] != c[r]) ans += len[l];
			--l;
		} else {
			len[l] -= len[r];
			if (c[l] != c[r]) ans += len[r];
			++r;
		}
	}
	cout << ans;
	return 0;
}