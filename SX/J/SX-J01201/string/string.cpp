#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
long long n, ans;
long long a[N];
char c[N];

void count(int x, int y) {
	if (x >= y)
		return;
	if (c[x] != c[y])
		ans += min(a[x], a[y]);
	if (a[x] > a[y]) {
		a[x] = a[x] - a[y];
		count(x, y - 1);
	}
	if (a[x] < a[y]) {
		a[y] = a[y] - a[x];
		count(x + 1, y);
	}
	if (a[x] == a[y]) {
		count(x + 1, y - 1);
	}

}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	count(1, n);
	cout << ans;
	return 0;
}
