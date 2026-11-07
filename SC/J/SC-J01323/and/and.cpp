#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());
	int ans = a[0];
	for (int i = 0; i < m; i++) {
		ans&=a[i];
	}
	cout << ans;
}

signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	solve();
	return 0;
} 