#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	vector<char> c(n + 1);
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i] >> c[i];
	}
	long long ans = 0;
	int l = 1, r = n;
	while (l < r) {
		if (a[l] == a[r]) {
			if (c[l] != c[r]) {
				ans += a[l];
			}
			++l;
			--r;
		} else if (a[l] > a[r]) {
			int p = a[l] - a[r];
			if (c[l] != c[r]) {
				ans += a[r];
			}
			a[l] = p;
			--r;
		} else {
			int p = a[r] - a[l];
			if (c[l] != c[r]) {
				ans += a[l];
			}
			a[r] = p;
			++l;
		}
	}
	cout << ans;
	return 0;
}