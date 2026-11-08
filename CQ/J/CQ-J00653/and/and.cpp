#include "bits/stdc++.h"
#define int long long
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
#define ft first
#define sd second
#define pii pair<int, int>
#define qwq while (1) cout << "qwq\n";
using namespace std;
const int N = 2e5 + 5, INF = 0x3f3f3f3f3f3f3f3fll;
int n, m, a[N], sum[40];
int b[N][40], cnt[N];
int c[N];
auto init() -> void {}
auto solution() -> void {
	cin >> n >> m;
	rep(i, 1, n) {
		cin >> a[i];
		int t = a[i];
		while (t) {
			sum[cnt[i]] += t % 2;
			b[i][cnt[i]++] = t % 2;
			t /= 2;
		}
		cnt[i]--;
	}
	int ans = 0, tot = n;
	fill(c + 1, c + 1 + n, 1);
	per(k, 29, 0) {
		if (sum[k] < m) continue;
		rep(i, 1, n) {
			if (!b[i][k]) {
				tot -= c[i];
				c[i] = 0;
			}
		}
		if (tot >= m) {
			ans += (1 << k);
		}
	}
	cout << ans;
}
/*
5 3
31 3 1 15 7
*/
auto main()-> signed {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int T = 1;
//	cin >> T;
	while (T--) {
		init();
		solution();
	}
	return 0;
}


