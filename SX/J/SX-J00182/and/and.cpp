#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int mmax = -1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				int x = (a[i] & a[j]);
				mmax = max(mmax, x);
			}
		}
		cout << mmax;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			mmax = max(mmax, a[i]);
		}
		cout << mmax;
		return 0;
	}
	return 0;
}
