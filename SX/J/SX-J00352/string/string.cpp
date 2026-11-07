#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, k;
	char c;
	string s;
	cin >> n;
	int l = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> k >> c;
		for (int j = 1; j <= k; j++)
			s += c, l++;

	}
	for (int i = 0, j = l - 1; i <= j ; i++, j--)
		if (s[i] != s[j])
			ans++;
	cout << ans;
	return 0;
}