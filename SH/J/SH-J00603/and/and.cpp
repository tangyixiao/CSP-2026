#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int maxn = 0;
		for (int i=0; i<n; i++) {
			maxn = max(maxn, a[i]);
		}
		cout << maxn << '\n';
	} else if (m == n) {
		int ans = a[0];
		for (int i=1; i<n; i++) {
			ans &= a[i];
		}
		cout << ans << '\n';
	} else if (m == 2) {
		int maxa = 0;
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				maxa = max(maxa, a[i]&a[j]);
			}
		}
		cout << maxa << '\n';
	} else if (m == n-1) {
		int maxa = 0;
		for (int i=0; i<n; i++) {
			int tmp = a[i+1];
			for (int j=0; j<n; j++) {
				if (j==i || j==i+1) {
					continue;
				}
				tmp &= a[j];
			}
			maxa = max(maxa, tmp);
		}
		cout << maxa << '\n';
	} else {
		sort(a, a+n, greater<int>());
		int i=0;
		cout << a[m-1] << '\n';
	}
	return 0;
}
