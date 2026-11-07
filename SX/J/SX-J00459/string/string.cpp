#include <bits/stdc++.h>
using namespace std;
int n, a[200005], w, e, u = 1, ans;
char c[200005], r[200005], t[100005], y[100005];
bool q;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (c[i] == c[i - 1] && i > 1)
			q = 1;
		else
			q = 0;
		w += a[i];
	}
	e = w / 2;
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= a[i]; j++) {
			r[j] = c[i];
		}
	}
	if (q == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= e; i++) {
		t[i] = r[i];
	}
	if (w % 2)
		u = 2;
	for (int i = e + u; i <= w; i++) {
		y[i] = r[i];
	}
	for (int i = 1; i <= w; i++) {
		if (t[i] != y[i])
			ans++;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}