#include <bits/stdc++.h>
using namespace std;

int n, m, t[200001][31], a[200001], mx;
set<int> s;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		s.insert(i);
		int b = a[i];
		int j = 0;
		while (b) {
			t[i][j] = b % 2;
			b /= 2;
			j++;
		}
		mx = max(mx, a[i]);
	}
	if (m == 1) {
		printf("%d\n", mx);
		return 0;
	}
	else if (m == 2) {
		int ans = 0;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				ans = max(ans, a[i] & a[j]);
		printf("%d\n", ans); 
	}
	else {
		for (int i = 30; i >= 0; i--) {
			int cnt = 0;
			for (auto j : s)
				cnt += (t[j][i] == 1);
			if (cnt >= m) {
				vector<int> erased;
				for (auto j : s)
					if (t[j][i] == 0)
						erased.push_back(j);
				for (auto j : erased)
					s.erase(s.find(j));
			}
		}
		auto it = s.begin();
		int ans = a[*it];
		for (int i = 2; i <= m; i++) {
			it = next(it);
			ans &= a[*it];
		}
		printf("%d\n", ans);
	}
}
