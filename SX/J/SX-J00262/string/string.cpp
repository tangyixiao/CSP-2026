#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	vector<int> x(n + 1);
	vector<char> ch(n + 1);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> ch[i];
		sum += x[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < x[i]; j++) {
			s += ch[j];
		}
	}
	int ans = 0;
	for (int i = 0; i < sum; i++) {
		if (s[i] == s[sum + 1 - i]) {
			continue;
		} else {
			ans++;
		}
	}

	cout << ans;
	return 0;
}
