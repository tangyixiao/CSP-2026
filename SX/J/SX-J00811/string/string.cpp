#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], ans;
char c, t;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> c;
		for (int j = 1; j <= a[i]; j++) {
			s += c;
		}
	}
	if (n == 1) {
		cout << 0;
		return 0;
	}
	long long e = s.size() - 1;
	if (s.size() % 2 == 0) {
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[e]) {
				t = s[e];
				s[i] = t;
				ans++;
			}
			e--;
		}
	} else {
		for (int i = 0; i < (s.size() - 1) / 2; i++) {
			if (s[i] != s[e]) {
				t = s[e];
				s[i] = t;
				ans++;
			}
			e--;
		}
	}
	cout << ans;
	return 0;
}
