#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, ans = 0;

	cin >> n;
	string s;
	s = " " + s;
	for (int i = 1; i <= n; i++) {
		long long k;
		char a;
		cin >> k >> a;
		for (int i = 1; i <= k; i++) {
			s += a;
		}
	}
	int t = s.size();
	for (int i = 1; i <= t / 2; i++) {
		if (s[i] != s[t]) {
			ans++;
		}
		t--;

	}
	cout << ans;
	return 0;
}
