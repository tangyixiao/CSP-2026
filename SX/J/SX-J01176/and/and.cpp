#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[100010], d[100010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<long long>());
	for (int i = 1; i <= m; i++) {
		d[i] = a[i];
	}
	sort(d + 1, d + 1 + m);
	cout << d[1];
	return 0;
}