#include <bits/stdc++.h>

bool cmp(long long a, long long b) {
	int cnta = 0, cntb = 0;
	while (a) {
		cnta += a & 1;
		a >>= 1;
	}
	while (b) {
		cntb += b & 1;
		b >>= 1;
	}
	return cnta > cntb;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n, m;
	std::cin >> n >> m;

	std::vector<long long> a(n + 1);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}

	auto b = a;

	std::sort(a.begin() + 1, a.end(), cmp);
	std::sort(b.begin() + 1, b.end(), std::greater<long long>());
	long long ans = a[1];
	for (int i = 1; i <= m; i++) {
		ans &= a[i];
	}
	long long ans2 = b[1];
	for (int i = 1; i <= m; i++) {
		ans2 &= b[i];
	}
	std::cout << std::max(ans, ans2);
//	long long ans = 0;
//	auto dfs = [&](auto &&self, long long sum, long long cnt, long long idx) -> void {
//		if (sum < ans)
//			return;
//		if (cnt == m) {
//			ans = std::max(ans, sum);
//		}
//		if (idx > n)
//			return;
//		if (cnt == 0)
//			sum = a[idx];
//		for (int i = idx; i <= n; i++) {
//			self(self, sum &a[i], cnt + 1, i + 1);
//		}
//		self(self, sum, cnt, idx + 1);
//	};
//	dfs(dfs, 0, 0, 1);
//	std::cout << ans;
	return 0;
}
