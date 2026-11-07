#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], mmax = 0;

long long f(int l, int r) {
	int s = a[l];
	for (int i = l + 1; i <= r; i++) {
		s &= a[i];
	}
	return s;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i = 1, j = m; j <= n; i++, j++) {
		mmax = max(mmax, f(i, j));
	}
	cout << mmax;
	return 0;
}