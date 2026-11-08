#include <bits/stdc++.h>

#define int long long

using namespace std;

namespace zcq_qwq {
	const int N = 2e5 + 5;
	
	int a[N], sum[N];
	
	char c[N];
	
	int n, L;
	
	void main() {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
			L += a[i];
			sum[i] = sum[i - 1] + a[i];
		}
		int mid = (L + 1) >> 1;
		int l = mid - (L & 1), r = mid + 1;
		int ans = 0;
		while (l >= 1 && r <= L) {
			int posl = lower_bound(sum + 1, sum + n + 1, l) - sum;
			int posr = lower_bound(sum + 1, sum + n + 1, r) - sum;
			int tmp = min(l - sum[posl - 1], sum[posr] - r + 1);
			if (c[posl] != c[posr]) ans += tmp;
			l -= tmp, r += tmp;
		}
		cout << ans;
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	zcq_qwq::main();
	return 0;
}

/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/

