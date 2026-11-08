#include <bits/stdc++.h>

using namespace std;

namespace Code {
	constexpr int N = 5e5 + 5;
	constexpr int M = 3e5 + 5;

	int n, m;
	int a[N];

	int pos[M];
	int card[N], p = 0;

	int ans[M];

	void main() {
		bool SA = true;

		cin >> n >> m;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
			SA &= (a[i - 1] <= a[i]);
		}

		if (SA && (n > 5000 || m > 3000)) {
			for (int i = 1; i <= n; ++ i)
				ans[a[i]] = i;
			for (int i = 1; i <= m; ++ i)
				cout << ans[i] << ' ';

			return ;
		}
		
		for (int i = 1; i <= n; ++ i) {
			p = 0;
			for (int j = 1; j <= m; ++ j)
				pos[j] = 0;
			for (int j = i; j <= n; ++ j) {
				if (pos[a[j]] != 0 && pos[a[j]] <= p)
					p = pos[a[j]];
				else {
					++ p;
					if (pos[card[p]] >= p)
						pos[card[p]] = 0;
					pos[a[j]] = p;
					card[p] = a[j];
				}
			}

			for (int j = 1; j <= p; ++ j)
				++ ans[card[j]];
		}

		for (int i = 1; i <= m; ++ i)
			cout << ans[i] << ' ';
	}
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Code::main();

	return 0;
}

/*
3 1 2 1 3 2 3 1 2 1
1 

1  2  3  4  5  6  7  8  9 10
3  1  2  1  3  2  3  1  2  1
1  2  3  4  5  6  6  8  8

0  0  0  0  0  0  1  0  1 10
*/