#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int n, ds[N], ans;
char zm[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ds[i] >> zm[i];
	}
	int l = 0, r = n;
	while (l < r) {
		if (ds[l] < ds[r]) {
			ds[r] -= ds[l];
			if (zm[l] != zm[r]) {
				ans += ds[l];
			}
			l++;
		} else if (ds[l] == ds[r]) {
			if (zm[l] != zm[r])
				ans += ds[l];
			l++, r--;

		} else {
			ds[l] -= ds[r];
			if (zm[l] != zm[r])
				ans += ds[r];
			r--;
		}
	}
	cout << ans;
	return 0;

}
