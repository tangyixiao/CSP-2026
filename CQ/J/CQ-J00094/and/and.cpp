#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 5e5;
const int LOGN = 20;
int a[MAXN | 1];
int hs[MAXN | 1], ts[MAXN | 1];
int lv[MAXN | 1], ln[MAXN | 1], lend;
bool vis[MAXN | 1];
bool specA = true;
int mxA = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%d", a + i);
		if (specA && (a[i] + 1 & (-a[i] - 1)) != a[i] + 1) specA = false;
		mxA = max(mxA, a[i]);
	}
	if (mxA == 0) {
		putchar('0');
	} else if (specA) {
		sort(a, a + n, greater<int>());
		int ans = a[0];
		for (int i = 1; i < m; ++i) ans &= a[i];
		printf("%d", ans);
	} else if (m == 1) {
		printf("%d", mxA);
	} else if (m == 2) {
		int ans = 0;
		for (int mxi = 0; mxi < n; ++mxi) {
			for (int i = 0; i < n; ++i) {
				if (i == mxi) continue;
				ans = max(ans, (a[i] & a[mxi]));
			}
		}
		printf("%d", ans);
	} else if (m == n) {
		int ans = a[0];
		for (int i = 1; i < n; ++i) ans &= a[i];
		printf("%d", ans);
	} else if (m == n - 1) {
		int ans = 0;
		hs[0] = a[0];
		for (int i = 1; i < n; ++i) hs[i] = hs[i - 1] & a[i];
		ts[n - 1] = a[n - 1];
		for (int i = n - 2; i >= 0; --i) ts[i] = ts[i + 1] & a[i];
		for (int i = 0; i < n; ++i) {
			int cur = -1;
			if (i) cur = hs[i - 1];
			else if (i < n - 1) {
				if (cur == -1) cur = ts[i + 1];
				else cur &= ts[i + 1];
			}
			ans = max(ans, cur);
		}
		printf("%d", ans);
	} else if (n <= 19 && (1ULL << n) * n <= 1e7) {
		int ans = 0;
		uint64_t mske = 1ULL << n;
		for (uint64_t mask = 0; mask < mske; ++mask) {
			int zeros = 0;
			uint64_t cp = mask;
			while (cp) {
				if (++zeros > m) break;
				cp &= cp - 1;
			}
			if (zeros != m) continue;
			cp = mask;
			int cur = -1;
			for (int i = 0; i < n; ++i) {
				if (cp & 1) {
					if (cur != -1) cur &= a[i];
					else cur = a[i];
				}
				cp >>= 1;
			}
			ans = max(cur, ans);
		}
		printf("%d", ans);
	} else {
		sort(a, a + n, greater<int>());
		int ans = a[0]; vis[0] = true;
		while (--m) {
			int cp = ans;
			int lcnt = 0;
			while (lcnt > 1 && cp) {
				int lcnt = 0, lhead = 0;
				int hg;
				while (!lcnt && cp) {
					hg = 1 << (31 - __builtin_clz(cp));
					cp &= ~hg;
					for (int i = 1; i < n && a[i] >= hg; ++i) {
						if (vis[i]) continue;
						if (lcnt) ln[lcnt - 1] = lcnt;
						lv[lcnt] = i; ln[lcnt++] = 0;
					}
				}
				while (lcnt > 1) {
					bool has = false;
					int lst = -1;
					for (int k = lhead; k && lcnt > 1; k = ln[k]) {
						if ((a[lv[k]] & hg) == 1) {
							if (!has) {
								has = true;
								int lst = -1;
								for (int j = lhead; j != k; j = ln[j]) {
									if ((a[lv[j]] & hg) != 1) {
										if (j == lhead) lhead = ln[j];
										if (lst != -1) ln[lst] = ln[j];
										--lcnt;
									} else lst = j;
								}
							}
							lst = k;
						} else if (has) {
							if (lst != -1) ln[lst] = ln[k];
							--lcnt;
						}
					}
				}
				if (lcnt == 1) {
					ans &= a[lv[lhead]];
					vis[lv[lhead]] = true;
				} else if (lcnt > 1) {
					int k = lhead;
					while (ln[k]) k = ln[k];
					ans &= a[lv[k]];
					vis[lv[k]] = true;
				} else {
					putchar('0');
					return 0;
				} 
			}
		}
		printf("%d", ans);
	}
	return 0;
}
