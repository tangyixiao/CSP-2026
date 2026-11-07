#include <bits/stdc++.h>
using namespace std;
long long n, ans, l;
string s = "0";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long ai;
		char c;
		cin >> ai >> c;
		l += ai;
		for (long long j = 1; j <= ai; j++) {
			s += c;
		}
	}
	for (long long i = 1; i <= l / 2 ; i++) {
		if (s[i] != s[l + 1 - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}