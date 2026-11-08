#include <bits/stdc++.h>

using namespace std;

namespace Code {
	constexpr int N = 2e5 + 5;

	int n, m;
	vector < int > v;
	vector < int > t;

	int mx = 1;
	int ans = 0;

	void main() {
		cin >> n >> m;
		for (int i = 1; i <= n; ++ i) {
			int x;
			cin >> x;

			v.emplace_back(x);
			if (x) mx = max(mx, __lg(x) + 1);
		}

		for (int i = mx; i >= 1; -- i) {
			int cnt = 0;
			for (auto j : v)
				if ((j & (1 << (i - 1))))
					++ cnt;
			
			if (cnt >= m) {
				ans += (1 << (i - 1));
				
				if (cnt != v.size()) {
					t = v;
					v.clear();
					for (auto j : t)
						if (j & (1 << (i - 1)))
							v.emplace_back(j);
				}
			}
		}

		cout << ans << '\n';
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Code::main();

	return 0;
}