#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pii pair<int,int>
const int N = 5e5+5;
int n, a[N], m, ans;
vector<int> v1, v2;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		v1.push_back(a[i]);
	}
	for (int i = 30; i >= 0; i--) {
		int tmp = (1ll << i);
		for (auto i : v1) {
			if (i & tmp)
				v2.push_back(i);
		}
		if (v2.size() >= m) {
			v1.clear();
			for (auto i : v2)
				v1.push_back(i);
			ans += tmp;
		}
		v2.clear();
	}
	cout << ans << '\n';
	return 0;
}
