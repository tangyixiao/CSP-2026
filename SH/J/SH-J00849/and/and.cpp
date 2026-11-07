#include <iostream>
#include <cstring>
#include <cmath>
using ll = long long;
using uint = unsigned int;
using namespace std;
constexpr int N = 2e5 + 10;
uint n, m, a[N];
uint pre[N];
int max(int a, int b) { return a > b ? a : b; }
int lowbit(int x) { return x & (-x); }
namespace bruteforce {
	uint ans = 0;
	void dfs(int u, int already, int res) {
		if (already == m) {
			ans = max(ans, res);
			return;
		}
		if (u > n) return;
		dfs(u + 1, already, res);
		dfs(u + 1, already + 1, res & a[u]);
	}
}
namespace sqrtsolve {
	void solve() {
		int block = sqrt(n); // 根号预计算 
		memset(pre, -1, sizeof pre);
		for (int i = 0; i <= block; ++i) {
			for (int j = i * block + 1; j <= (i+1)*block && j <= n /*最后一块*/; ++j) {
				pre[i] &= a[j];
			}
		}
		uint ans = 0, res;
		for (int i = 1; i <= n; ++i) {
			res = -1;
			int target = i / block;
			for (int j = 0; j <= block; ++j) {
				if (j == target) continue;
				res &= pre[j];
			}
			for (int k = target * block + 1; k <= (target+1)*block && k <= n; ++k) {
				if (k != i) res &= pre[k];
			}
			ans = max(ans, res);
		}
		cout << ans << "\n";
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	uint mx = 0, tot= -1;
	bool A = true, B = lowbit(n) == n, C = true;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i], mx = max(mx, a[i]), tot &= a[i];
		if (lowbit(a[i] + 1) != a[i] + 1) A = false;
		if (a[i] != i-1) B = false;
		if (a[i] >= 4) C = false;
	}
	// -----------------------------------------------
	if (m == 1) cout << mx << "\n";
	  else if (m == 2) {
		mx = 0;
		for (int i = 1; i <= n; ++i)
			for (int j = i+1; j <= n; ++j) 
			    mx = max(a[i] & a[j], mx);
		cout << mx << "\n";
	} else if (m == n) cout << tot << "\n";
	  else if (m == n-1) sqrtsolve::solve();
	  else if (B) {
		uint res = -1;
		for (int i = n; i > n-m; --i) res &= a[i];
		cout << res << "\n";
	} else if (C) {
		int x[4];
		for (int i = 1; i <= n; ++i) ++x[a[i]];
		if (x[3] >= m) cout << "3\n";
		else if (x[2] + x[3] >= m) cout << "2\n";
		else if (x[1] + x[3] >= m) cout << "1\n";
		else cout << "0\n";
	} else {
		bruteforce::dfs(0, 0, -1);
		cout << bruteforce::ans << "\n";
	}
	return 0;
}
