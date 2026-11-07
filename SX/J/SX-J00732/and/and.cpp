#include <bits/stdc++.h>
using namespace std;

int n, m, maxz = -1, maxx = -1;
long long ans;
int a[200010];
int w[50];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(a[i], maxx);
		int x = a[i], zss = 0;
		while (x > 0) {
			zss++;
			if (x % 2 == 1)
				w[zss]++;
			x /= 2;
		}
		maxz = max(zss, maxz);
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	/*
	for (int i = maxz; i > 0; i--) {
		cout << w[i] << " ";
	}
	cout << endl;
	*/
	int r = m;
	for (int i = maxz; i > 0; i--) {
		if (w[i] >= m && r > 0) {
			r--;
			ans += pow(2, i - 1);
		}
	}
	cout << ans;
	return 0;
}
