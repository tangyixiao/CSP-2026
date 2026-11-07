#include <bits/stdc++.h>
using namespace std;
int n, a[200005];
char c[200005];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	if (n == 1) {
		cout << 0;
		return 0;
	}
	if (n == 2) {
		if (c[1] == c[2]) {
			cout << 0;
		} else {
			cout << min(a[1], a[2]);
		}
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= a[i]; j++) {
				s += c[i];
			}
		}
		int l = s.size();
		for (int i = 1; i <= l / 2; i++) {
			if (s[i] != s[l + 1 - i]) {
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
}
