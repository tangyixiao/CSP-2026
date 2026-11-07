#include <bits/stdc++.h>
using namespace std;
int a[200001];
char s[200003];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long t = 0, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t += a[i];
		cin >> s[i];
	}
	int g = 0, h = 0, q = 1, p = n;
	for (int i = 1; i <= t / 2; i++) {
		g++;
		h++;
		if (s[q] != s[p]) {
			ans++;
		}
		if (g == a[q]) {
			g = 0;
			q++;
		}
		if (h == a[p]) {
			h = 0;
			p--;
		}
	}
	cout << ans;
	return 0;
}
