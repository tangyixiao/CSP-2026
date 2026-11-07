#include <bits/stdc++.h>
using namespace std;
int a[200001];
char b[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long long t = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		t += a[i];
	}
	int g = 0, h = 0, q = 1, p = n;
	for (int i = 1; i <= t / 2; i++) {
		g++;
		h++;
		if (b[q] != b[p])
			ans++;
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