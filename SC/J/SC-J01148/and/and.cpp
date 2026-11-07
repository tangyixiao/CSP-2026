#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 2e5+3;
int a[INF];
int n, m;
int f(int x, int y, int z) {
	if (z == 0)return y;
	int ans = 0;
	for (int i = x; i <= n - z + 1; i++) {
		ans = max(ans, f(i + 1, y&a[i], z - 1));
	}
	return ans;
}
signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = 1; i <= n - m + 1; i++) {
		int x = a[i];
		ans = max(ans, f(i + 1, x, m - 1));
	}
	cout << ans;
	return 0;
}