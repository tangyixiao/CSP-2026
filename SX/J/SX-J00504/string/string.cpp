#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s = "";
	int n;
	long long k;
	char c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k >> c;
		for (int j = 1; j <= k; j++) {
			s += c;
		}
	}
	long long mid = s.size() / 2, l = 0, r = s.size() - 1, ans = 0;
	for (long long i = 0; i < mid; i++) {
		if (s[l] != s[r]) {
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}