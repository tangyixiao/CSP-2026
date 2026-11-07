#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, m, l, a[N], ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	l = 1;

	for(int _ = 30; _ >= 0; _--) {
		sort(a + l, a + n + 1);

		int mask = (1 << _);
		int rpos = lower_bound(a + l, a + n + 1, mask) - a;

		if (n - rpos + 1 >= m) {
			ans += mask;
			l = rpos;
		}

		for(int i = l; i <= n; i++) {
			a[i] &= (mask - 1);
		}
	}

	cout << ans;

	return 0;
}