#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	string s;
	for (int i = 0; i < n; i++) {
		long long a;
		char c;
		cin >> a >> c;
		string t(a, c);
		s += t;
	}
	long long int ans = 0;
	for (int i = 0; i <= s.size() / 2; i++)
		if (s[i] != s[s.size() - i])
			ans++;
	cout << ans;
	return 0;
}
