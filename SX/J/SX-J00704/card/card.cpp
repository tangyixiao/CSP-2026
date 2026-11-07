#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int n, m;
int a[N];
int cnt[M];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		int x = upper_bound(a + 1, a + 1 + n, a[i]) - a;
		cnt[a[i]] = x - 1;
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}
