#include <bits/stdc++.h>

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n, m;
	std::cin >> n >> m;

	std::vector<long long> a(n + 1);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	std::vector<long long> ans(m + 1);
	auto solve = [&](int i) -> void {
		int k = 0;
		std::vector<long long> pos(m + 1, -1);
		std::vector<long long> nn(m + 10);

		for (; i <= n; i++) {
			if (pos[a[i]] == -1) {
				k += 1;
				pos[a[i]] = k;
				nn[k] = a[i];
			} else {
				k = pos[a[i]];
			}
		}
		for (int j = 1; j <= k; j++) {
			ans[nn[j]]++;
		}
	};

	for (int i = 1; i <= n; i++) {
		solve(i);
	}
	for (int i = 1; i <= m; i++) {
		std::cout << ans[i] << " ";
	}
	return 0;
}
