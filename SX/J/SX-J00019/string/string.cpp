#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m, ans = 0, p[10000000000];
	string s[200010];
	string a[1000000000];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i] >> s[i];
		for (int j = 1; j <= s[i].size(); j++) {
			a[i] = s[i];
		}
	}
	if (n == 1) {
		cout << ans;
	}

	return 0;
}
