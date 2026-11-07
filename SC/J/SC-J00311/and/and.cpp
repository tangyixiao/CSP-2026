#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6;
int a[N];
signed main() {
	cin.tie(0)->sync_with_stdio(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mp[i] = a[i];
	}
	sort(a + 1, a + 1 + n, greater<int>());
	int len = 0, len2 = 0;
	int ans = (a[1] & a[2]);
	for (int i = 3; i <= m; i++) {
		ans = (ans&a[i]);
	}
	cout << ans;
}