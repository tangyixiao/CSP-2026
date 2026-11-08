#include <bits/stdc++.h>
#define int long long

using namespace std;

namespace Code {
	constexpr int N = 2e5 + 5;

	int n, a[N];
	char c[N];

	int cl, cr;
	int pl, pr;
	
	int ans = 0;
	int l = 1, r = 0;

	void main() {
		cin >> n;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i] >> c[i];
			r += a[i];
		}

		pl = 1, pr = n;
		cl = a[1], cr = a[n];
		while (l < r) {
			if (cl <= cr) {
				if (c[pl] != c[pr]) ans += cl;
				l += cl;
				r -= cl;

				cr -= cl;

				if (cr != 0) {
					++ pl;
					cl = a[pl];
				} else {
					++ pl, -- pr;
					cl = a[pl], cr = a[pr];
				}
			} else {
				if (c[pl] != c[pr]) ans += cr;
				l += cr;
				r -= cr;

				cl -= cr;

				-- pr;
				cr = a[pr];
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