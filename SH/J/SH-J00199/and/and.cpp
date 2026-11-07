#include <bits/stdc++.h>
#define FILE(s) freopen(s".in","r",stdin), freopen(s".out","w",stdout)
#define DEBUG(s) freopen(s".err","w",stderr)
#define CloseFILE fclose(stdin), fclose(stdout)
#define CloseDEBUG fclose(stderr)
#define int long long
#define endl "\n"
using namespace std;

constexpr int MAXN = 2e5+5;
int n, m, isa, ans, res, maxa, a[MAXN], use[MAXN], cnt[40];

void dfs(int step, int cnt) {
	if (cnt > m) return;
	if (step == n+1) {
		if (cnt != m) return;
		int ans = (1ll<<40)-1;
		for (int i = 1; i <= n; i++) {
			if (use[i]) ans = (ans & a[i]);
		}
		res = max(res, ans);
		return;
	}
	use[step] = 1;
	dfs(step+1, cnt+1);
	use[step] = 0;
	dfs(step+1, cnt);
}

signed main() {
	FILE("and"), DEBUG("and");
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> m;
	isa = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxa = max(maxa, a[i]);
		int popcnt = __builtin_popcountll(a[i]);
		if (a[i] != ((1<<popcnt)-1)) isa = 0;
	}
	if (n <= 20) {
		dfs(1, 0);
		cout << res << endl;
	} else {
		if (m == 1) {
			for (int i = 1; i <= n; i++) res = max(res, a[i]);
			cout << res << endl;
		} else if (m == 2) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (i == j) continue;
					res = max(res, (a[i]&a[j]));
				}
			}
			cout << res << endl;
		} else if (m == n) {
			res = (1ll<<40)-1;
			for (int i = 1; i <= n; i++) res = (res&a[i]);
			cout << res << endl;
		} else if (maxa <= 4) {
			for (int i = 1; i <= n; i++) cnt[a[i]]++;
			if (cnt[4] >= m) cout << 4 << endl;
			else if (cnt[3] >= m) cout << 3 << endl;
			else if (cnt[2]+cnt[3] >= m) cout << 2 << endl;
			else if (cnt[1]+cnt[2] >= m) cout << 1 << endl;
			else cout << 0 << endl; 
		} else if (isa) {
			for (int i = 1; i <= n; i++) {
				cnt[__builtin_popcountll(a[i])]++;
			}
			int found = 0;
			for (int i = 30; i >= 0; i--) {
				if (cnt[i] >= m) {
					cout << (1<<i)-1 << endl;
					found = 1;
					break; 
				}
			}
			if (!found) cout << 0 << endl;
		}
	}
//	CloseFILE, CloseDEBUG;
	return 0;
}
// mengpu
