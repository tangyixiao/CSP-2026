#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 5;

int n, a[N], ans;
char c[N];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}

	int l = 1, r = n;

	while(l < r) {
		int tmp = min(a[l], a[r]);

		if (c[l] != c[r]) {
			ans += tmp;
		}
		a[l] -= tmp;
		a[r] -= tmp;

		if (a[l] <= 0) ++l;
		if (a[r] <= 0) --r;
	}

	cout << ans;

	return 0;
}