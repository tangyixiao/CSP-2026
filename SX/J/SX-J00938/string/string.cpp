#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, n, x, ans = 0;
	char a;
	string s = "";
	cin >> n;
	while (n--) {
		cin >> x >> a;
		for (i = 1; i <= x; i++)
			s += a;
	}
	//cout << s << "\n";
	int len = s.size();
	for (i = 0; i < len / 2; i++) {
		if (s[i] != s[s.size() - 1  - i])
			ans++;
	}
	cout << ans;
	return 0;
}
