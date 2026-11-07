#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y) {
	return x > y;
}
const long long e = 2e30;
long long n, m, a[e],  maxx = -1;

int main() {
	freopen("and.in", "r", stdin)
	freopen("and.out", "w", stdout)
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + m + 1, cmp);
	for (int i = 1; i <= n; i++) {
		if ((a[i]&a[i + 1]) > maxx)
			maxx = a[i];
	}
	cout << maxx;
	return 0;
}
