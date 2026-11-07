#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	long long sum = (1 << 30) - 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= m; j++) {
			sum = (sum & a[i]);
		}
	}
	cout << sum;
	return 0;
}
