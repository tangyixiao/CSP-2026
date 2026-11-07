#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], c[200005], mmax = INT_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		c[i] = a[i] & a[i - 1];
	}
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= n; j ++) {

			mmax = max(c[i], mmax);
		}
	}
	cout << mmax;
	return 0;
}