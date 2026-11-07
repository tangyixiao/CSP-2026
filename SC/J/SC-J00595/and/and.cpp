#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a[200005] = {};
	int b[200005] = {};
	int c[200005] = {};
	long long n, m;
	long long delta = 1e9;
	bool d[200005] = {false};
	int e[200005] = {};
	int f[10000] = {};
	long long ans;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < 32; j++) {
			if (delta > a[i] - j * j) {
				delta = a[i] - j*j;
			}
		}
		c[i] = delta;
		delta = 1e9;
	}
	for (int i = 0; i < n; i++) {
		e[i] = c[i];
	}
	sort(e[0], e[n - 1]);
	for (int i = 0; i < m; i++) {
		int target = e[i];
		for (int j = 0; j < n; j++) {
			if (c[j] == target) {
				f[i] = c[j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		ans=11111111111111;
		ans=ans&f[i];
	}
	cout<<ans;
	return 0;
}