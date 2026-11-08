#include <bits/stdc++.h>
#define int long long

using namespace std;

namespace Code {
	constexpr int N = 2e5 + 5;

	struct Range {
		int cnt;
		char ch;	
	};

	int n;
	int a[N];
	char c[N];

	int sum[N]; // 前一个段的终止位置

	int tot = 0;
	Range range[N];

	void main() {
		cin >> n;
		for (int i = 1; i <= n; ++ i)
			cin >> a[i] >> c[i], sum[i] = sum[i - 1] + a[i];
		
		int L = sum[n];
		
		if (L & 1) {
			int middle = (L + 1) / 2, pos = 0;

			for (int i = 1; i <= n; ++ i)
				if (sum[i] >= middle && sum[i - 1] < middle) { pos = i; break; }

			for (int i = 1; i <= n; ++ i) {
				if (i == pos) {
					if (middle - sum[i - 1] - 1) range[++ tot] = {middle - sum[i - 1] - 1, c[i]};
					if (sum[i] - middle) range[++ tot] = {sum[i] - middle, c[i]};
				} else range[++ tot] = {a[i], c[i]};
			}
		} else {
			int pos = 0;
			int middle = (L / 2);

			for (int i = 1; i <= n; ++ i)
				if (sum[i] >= middle && sum[i - 1] < middle) { pos = i; break; }

			for (int i = 1; i <= n; ++ i) {
				if (i == pos) {
					if (middle - sum[i - 1]) range[++ tot] = {middle - sum[i - 1], c[i]};
					if (sum[i] - middle) range[++ tot] = {sum[i] - middle, c[i]};
				} else range[++ tot] = {a[i], c[i]};
			}
		}

		int l = 1, r = tot, ans = 0;
		while (l < r) {
			if (range[l].cnt < range[r].cnt) {
				if (range[l].ch != range[r].ch) {
					ans += range[l].cnt;
					range[r].cnt -= range[l].cnt;
				} else range[r].cnt -= range[l].cnt;
				++ l;
			} else if (range[l].cnt == range[r].cnt) {
				if (range[l].ch != range[r].ch) ans += range[l].cnt;
				++ l, -- r;
			} else if (range[l].cnt > range[r].cnt) {
				if (range[l].ch != range[r].ch) {
					ans += range[r].cnt;
					range[l].cnt -= range[r].cnt;
				} else range[l].cnt -= range[r].cnt;
				-- r;
			}
		}

		cout << ans << '\n';
	}
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Code::main();

	return 0;
}