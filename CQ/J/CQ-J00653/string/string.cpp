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
int n, a[N], pre[N];
char c[N];
auto init() -> void {}
auto solution() -> void {
	cin >> n;
	rep(i, 1, n) {
		cin >> a[i] >> c[i];
		if (c[i] == c[i - 1]) {
			a[i - 1] += a[i];
			i--;
			n--;
		}
	}
	if (n == 1) {
		cout << 0;
		return;
	}
	rep(i, 1, n) {
		pre[i] = pre[i - 1] + a[i];
	}
	string s = " ";
	int ans = 0;
	rep(i, 1, n) {
		rep(j, 1, a[i]) s += c[i];
	}
	rep(i, 1, pre[n] / 2) {
		ans += (s[i] != s[pre[n] - i + 1]);
	}
	cout << ans << "\n";
}
/*
aabbcdda
5
20 a
20 b
10 c
20 d
10 a
*/
auto main()-> signed {
//	freopen("string4.in", "r", stdin);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
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


