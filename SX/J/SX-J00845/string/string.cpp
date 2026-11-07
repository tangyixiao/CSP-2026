#include <bits/stdc++.h>
using namespace std;
long long n, ans, a, f = 1, cnt ;
string s, ss;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			if (c <= 'a' || c >= 'z')
				continue;
			s += c;

		}
	}
	long long len = s.size();
	for (int i = 0; i <= len - 1; i++) {
		if (s[i] != s[n + 1 - i]) {
			s[i] = s[n + 1 - i];
			ans++;
		}
	}
	cout << ans;
	return 1;
}