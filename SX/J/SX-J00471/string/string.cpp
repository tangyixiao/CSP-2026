#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, w, cnt, sum;
string s, a;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
		sum += m;
		for (int j = 1; j <= m; j++) {
			s += a;
		}
	}
	w = (s.size() + 1) / 2;
	for (int i = 0; i < w; i++) {
		if (s[i] != s[s.size() - 1 - i])
			cnt++;
	}
	cout << cnt;
	return 0;
}
