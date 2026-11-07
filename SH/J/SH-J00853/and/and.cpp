#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	sort(a.begin() + 1, a.end(), greater<int>());
	
	vector<int> ans;
	for (int mask = 31; mask >= 0; mask--) {
		for (int i = 1; i <= n; i++) {
			if ((a[i] & (1 << mask)) == (1 << mask)) {
				ans.push_back(i);
			}
		}
		if ((int)ans.size() >= m) {
			break;
		} else {
			ans.clear();
		}
	}
	
	int res = a[ans[0]];
	for (int i = 1; i < m; i++) {
		res &= a[ans[i]];
	}
	
	cout << res << "\n";
	
	return 0;
}
