#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y) {
	return x > y;
}
int n, m, a[200005], q;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= m; i++) {
		q += a[i] & a[i + 1];
	}
	cout << q / 2;
	return 0;
}
