#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
long long mx = -99999;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= 1; j--) {
			if (i == j) continue;
			long long l = a[i] & a[j];
			cout << (a[i] & a[j]) << endl;
			mx = max(mx, l);
		}
	}
	if (m == 1) {
		sort(a + 1, a + 1 + n);
		cout << a[n];
	} else cout << mx;
	return 0;
}