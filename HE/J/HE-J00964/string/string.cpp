#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		char b;
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}
	}
	s = ' ' + s;
	int L = s.size() - 1;
	int ans = 0;
	for (int i = 1; i <= L / 2; i++) {
		if (s[i] != s[L - i + 1]) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
