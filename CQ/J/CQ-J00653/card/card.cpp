#include "bits/stdc++.h"
#define int long long
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
#define ft first
#define sd second
#define pii pair<int, int>
#define qwq while (1) cout << "qwq\n";
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5, INF = 0x3f3f3f3f3f3f3f3fll;
int n, m, a[N], lst[M], q[N];
int ans[M], del[N], apr[M];
/*
没想出来 T2 咋做倒是把这道题做出来了 orz
*/
auto init() -> void {}
auto solution() -> void {
	cin >> n >> m;
	rep(i, 1, n) 
		cin >> a[i];
	rep(i, 1, n) {
		q[lst[a[i]]] = i;
		lst[a[i]] = i;
	}
	rep(i, 1, n) {
		int j = i;
		while (j <= n) {
			if (q[j]) {
				j = q[j];
			}
			else {
				if (apr[a[j]] != i) {
					apr[a[j]] = i;
					ans[a[j]]++;
				}
				j++;
			}
		}
	}
	rep(i, 1, m) cout << ans[i] << " ";
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1  2 1

1 2 3 2 1 3 1 2  3 2
0 0 0 2 1 3 5 4  6 8
5 4 6 8 7 9 0 10 0 0

*/
auto main()-> signed {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
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


