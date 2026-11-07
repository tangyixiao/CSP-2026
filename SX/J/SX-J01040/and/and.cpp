#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200000], maxx = 0;

int cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);

	for (int i = 1; i <= m; i++) {
		if (a[i]&a[i + 1] > maxx ) {
			maxx = a[i] & a[i + 1];
		}

	}
	cout << maxx;
	return 0;
}
