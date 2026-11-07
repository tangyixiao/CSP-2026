#include <iostream>
#include <cmath>

#define int long long

using namespace std;

const int N = 2e5 + 5;

int n, m, a[N], maxn, ans, sum, cnt;
bool f[N];

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		f[i] = true;
		maxn = max(maxn, (long long)log2(a[i]));
	}

	maxn++;
	for (int i = maxn; i >= 1; i--) {
		sum = 0;
		for (int j = 1; j <= n; j++) {
			if (!f[j]) continue;
			if (a[j] & (1 << (i - 1))) sum++;
		}
		if (sum >= m) {
			for (int j = 1; j <= n; j++) {
				if (!f[j]) continue;
				if (!(a[j] & (1 << (i - 1)))) f[j] = false;
			}
		}
	}
	
	ans = -1;
	for (int i = 1; i <= n; i++) {
		if (f[i]) {
			if (ans == -1) ans = a[i];
			else ans &= a[i];
			cnt++;
			if (cnt == m) break;
		}
	}
	
	cout << ans;
	
	return 0;
}