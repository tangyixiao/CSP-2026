#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, len, ans;
string s;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		char c;
		cin >> a >> c;
		len += a;
		while (a--) s += c;
	}
	for (int i = 0; i < len / 2; i++)
		if (s[i] != s[len - i - 1])
			ans++;
	cout << ans;
	return 0;
}

