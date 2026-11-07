#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, cnt, ans;
string s, s1;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> s1;
		cnt += a;
		while (a--) {
			s += s1;
		}
	}
	for (int i = 0, j = cnt - 1; i <= cnt, j >= 1; i++, j--) {
		if (s[i] != s[j]) {
			ans++;
		}
	}
	ans = (ans + 1) / 2;
	cout << ans;
}
