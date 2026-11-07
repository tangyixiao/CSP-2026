#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200001], b;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	b = a[n];
	for (int i = 1; i < m; i++) {
		b = b &a[n - i];
	}
	cout << b;
	return 0;
}