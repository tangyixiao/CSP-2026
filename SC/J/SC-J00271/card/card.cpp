#include <bits/stdc++.h>

using namespace std;
constexpr int MaxN = 5e5+5;
constexpr int MaxM = 3e5+5;
int n, m, a[MaxN], b[MaxN], ans[MaxN];

int main() {
	ios::sync_with_stdio(false);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	vector<vector<int>> find_it(m + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i]]++;
		find_it[a[i]].push_back(i);
	}
	int T = n+1;
	while (T--) {
		if (T == 1) {
			ans[a[n - 1]]++;
			break;
		}
		for (int i = n - T; i < n; i++) {
			int target = a[i];
			auto _next_target = upper_bound(find_it[target].begin(), find_it[target].end(), i);
			if (_next_target != find_it[target].end()) {
				i = (*_next_target) - 1;
			} else {
				ans[target]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;


	return 0;
}