#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[100005], ans = 0, x = 0;
	string s, c[100005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	for (int i = 0; i < n; i++) {
		x += a[i];
	}
	for (int i = 0; i < x - 1; i++) {
		if (s[i] != s[x - 1 - i]) {
			s[x - 1 - i] = s[i];
			ans++;
		}
	}
	cout << ans;
	return 0;
}
