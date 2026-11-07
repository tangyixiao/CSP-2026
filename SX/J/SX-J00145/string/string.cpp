#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+5;
ll n, a[N], x, y, ans, yun;
char b[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	x = 1, y = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	while (x < y) {
		ll qw = min(a[x], a[y]);
		ans += qw;
		a[x] -= qw;
		a[y] -= qw;
		if (a[x] == 0)
			x++;
		if (a[y] == 0)
			y--;
	}
	cout << ans;
	return 0;
}